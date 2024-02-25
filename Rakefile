require "rake/extensiontask"
Rake::ExtensionTask.new "AE" do |ext|
  ext.lib_dir = "lib/AE"
end

task :default => :test

task :test => :compile

require "minitest/test_task"
Minitest::TestTask.create
