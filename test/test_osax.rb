#!/usr/bin/ruby -w

require 'minitest/autorun'
require 'osax'

class TC_OSAX < Minitest::Test

  def test_1
    sa = OSAX.osax('StandardAdditions')

    assert_equal(65, sa.ASCII_number('A'))

    assert_equal(MacTypes::Alias.path("/Applications/"), sa.path_to(:applications_folder))

    assert_equal(MacTypes::Alias.path("/Library/Scripts/"),
                 sa.path_to(:scripts_folder, :from=>:local_domain))

    assert_raises(RuntimeError) { sa.non_existent_command }
  end

  # These calls to `sa.ASCII_number` aren't valid anymore. They will
  # intentionally raise a -10004 (privilege violation occurred) error
  # due to unnecessary cross-application scripting (ie, the command is
  # perfectly fine in the current application rather than the "remote"
  # application). See:
  #
  #   https://developer.apple.com/library/archive/releasenotes/AppleScript/RN-AppleScript/RN-10_6/RN-10_6.html#//apple_ref/doc/uid/TP40000982-CH106-SW6
  #
  # As such, maybe these tests should be performing something with the
  # finder? Hrm. Nope! That's an error too. `sa` is the
  # StandardAdditions osax and nothing shall change that. I'm not
  # really sure what these tests were trying to achive tbh.

  def test_2
    sa = OSAX.osax('StandardAdditions').by_name('Finder')
    # assert_equal(65, sa.ASCII_number('A'))
    assert_equal(MacTypes::Alias.path("/System/Library/CoreServices/Finder.app/"), sa.path_to(nil))
  end

  def test_3
    sa = OSAX.osax('StandardAdditions').by_creator('MACS')
    # assert_equal(65, sa.ASCII_number('A'))
    assert_equal(MacTypes::Alias.path("/System/Library/CoreServices/Finder.app/"), sa.path_to(nil))
  end

  def test_4
    sa = OSAX.osax('StandardAdditions').by_id('com.apple.Finder')
    # assert_equal(65, sa.ASCII_number('A'))
    assert_equal(MacTypes::Alias.path("/System/Library/CoreServices/Finder.app/"), sa.path_to(nil))
  end

  def test_5
    pid = `top -l1 | grep Finder | awk '{ print $1 }'`.to_i
    sa = OSAX.osax('StandardAdditions').by_pid(pid)
    # assert_equal(65, sa.ASCII_number('A'))
    assert_equal(MacTypes::Alias.path("/System/Library/CoreServices/Finder.app/"), sa.path_to(nil))
  end

  def test_6
    sa = OSAX.osax('StandardAdditions').by_aem_app(AEM::Application.by_path("/System/Library/CoreServices/Finder.app/"))
    # assert_equal(65, sa.ASCII_number('A'))
    assert_equal(MacTypes::Alias.path("/System/Library/CoreServices/Finder.app/"), sa.path_to(nil))
  end
end
