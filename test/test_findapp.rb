#!/usr/bin/ruby -w

require "minitest/autorun"
require "_aem/findapp"


class TC_FindApp < Minitest::Test

  def test_find
    [
      "/System/Applications/Calendar.app",
      "Calendar.app",
      "Calendar",
     ].each do |name|
      assert_equal("/System/Applications/Calendar.app", FindApp.by_name(name))
    end
    assert_equal("/System/Applications/TextEdit.app", FindApp.by_creator("ttxt"))
    assert_equal("/System/Library/CoreServices/Finder.app", FindApp.by_id("com.apple.finder"))
    assert_raises(FindApp::ApplicationNotFoundError) { FindApp.by_name("NON-EXISTENT-APP") }

    # assert_equal("/Users/has/\306\222\303\270u\314\210.app", FindApp.by_name("\306\222\303\270u\314\210.app")) # utf8 paths work ok
  end
end
