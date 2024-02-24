require "rake/testtask"

require "rake/extensiontask"

Rake::ExtensionTask.new "AE" do |ext|
  ext.lib_dir = "lib/AE"
end

task :default => :test

task :test => :compile

Rake::TestTask.new do |t|
  t.test_files = FileList['./test/test_*.rb']
  t.verbose = true
  t.loader = :direct
end
