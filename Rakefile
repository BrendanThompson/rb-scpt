require "rake/testtask"

task :default => :test

task :default => :build
task :test => :build

task :build do
  ruby "extconf.rb"
  sh "make"
end

Rake::TestTask.new do |t|
  t.libs << "src/lib" << "."
  t.test_files = FileList['test/test_*.rb']
  t.verbose = true
  t.loader = :direct
end
