require "rake/testtask"

require "rake/extensiontask"

Rake::ExtensionTask.new "rb-scpt" do |ext|
  ext.lib_dir = "lib/rb-scpt"
end

task :default => :test

task :test => :compile

Rake::TestTask.new do |t|
  t.test_files = FileList['./test/test_*.rb']
  t.verbose = true
  t.loader = :direct
end
