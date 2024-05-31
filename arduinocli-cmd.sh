arduino-cli upload --port COM4 --fqbn esp8266:esp8266:generic main
arduino-cli monitor -p COM4
arduino-cli compile --fqbn esp8266:esp8266:generic main
# oder /dev/ttyUSB für port