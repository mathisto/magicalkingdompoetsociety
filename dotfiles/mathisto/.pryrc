begin
  require 'jazz_fingers'
  Pry.color = true
  JazzFingers.configure do |config|
    config.colored_prompt = true
    config.awesome_print = true
    config.coolline = true
    config.prompt_separator = "⌨"
    config.application_name = Pry
  end
rescue LoadError => e
  raise unless e.message =~ /.*such file.*jazz_fingers/
  puts 'No Jazz Fingers 😭'
end
