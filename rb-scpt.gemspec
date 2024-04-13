require "rubygems"

require "./lib/version.rb"

Gem::Specification.new do |s|
  s.name       = "rb-scpt"
  s.version    = Appscript::Version
  s.homepage   = "https://github.com/BrendanThompson/rb-scpt"
  s.summary    = "This is a fork of the original rb-appscript. Ruby AppleScript (rb-scpt) is a high-level, user-friendly Apple event bridge that allows you to control scriptable Mac OS X applications using ordinary Ruby scripts."
  s.files      = File.readlines("Manifest.txt", chomp:true)
  s.extensions = s.files.grep(/extconf.rb/)
  s.test_files = s.files.grep(/^test/)
  s.authors    = ["hhas","Brendan Thompson"]
  s.email      = 'brendan@btsystems.com.au'

  s.license = "AML"

  s.required_ruby_version = ">= 2.7"
end
