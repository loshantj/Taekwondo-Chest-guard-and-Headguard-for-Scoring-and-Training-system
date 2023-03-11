#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
    Serial.println("Could not find a valid BMP085 sensor, check wiring!");
    while (1) {}
  }
}
//comment
void loop() {
  float pressure = bmp.readPressure() / 100.0F; // convert to hPa
  Serial.print("Pressure = ");
  Serial.print(pressure);
  Serial.println(" hPa");

  delay(1000);
}
