require "rake/extensiontask"
Rake::ExtensionTask.new "AE" do |ext|
  ext.lib_dir = "lib/AE"
end

task :default => :test

task :test => :compile

task :clean do
  rm_f Dir["**/*~", "*.gem"]
end

desc "build the project"
task :build do
  sh "make"
end

task :gem => [:clean, :clobber] do
  system "gem build"
end

require "minitest/test_task"
Minitest::TestTask.create
