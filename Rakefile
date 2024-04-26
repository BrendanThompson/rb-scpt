require "rake/extensiontask"
Rake::ExtensionTask.new "ae"

task :default => :test

task :test => :compile

task :clean do
  rm_f Dir["**/*~", "*.gem", "**/*.bundle"]
end

desc "build the gem"
task :gem => [:clean, :clobber] do
  system "gem build"
end

require "minitest/test_task"
Minitest::TestTask.create
