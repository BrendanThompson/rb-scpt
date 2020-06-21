require "rake/testtask"

task :default => :test

task :default => :build
task :test => :build

desc "build the project"
task :build do
  sh "make"
end

task :build => %w[Makefile ae.bundle]

file "Makefile" do
  ruby "extconf.rb"
end

deps = %w[SendThreadSafe rbae]

file "ae.bundle" => deps.map { |dep| "#{dep}.o" }

deps.each do |dep|
  file "#{dep}.o" => "src/#{dep}.c"
end

Rake::TestTask.new do |t|
  t.libs << "src/lib" << "."
  t.test_files = FileList['test/test_*.rb']
  t.verbose = true
  t.loader = :direct
end
