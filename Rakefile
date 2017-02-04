require "rake/testtask"

task :default => :test

Rake::TestTask.new do |t|
  t.libs << "src/lib" << "."
  t.test_files = FileList['test/test_*.rb']
  t.verbose = true
  t.loader = :direct
end
