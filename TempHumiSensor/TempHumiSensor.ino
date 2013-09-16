/*
  siderkick plus demo
  Temp & Humi Sensor and LCD

  Temp & Humi Sensor connect to Temp&Humi Sensor 
  LCD connect to xx
*/

#include <DHT.h>

#define DHTTYPE         DHT22

const int pinDht = 2;                       // pin of sensor

DHT dht(pinDht, DHTTYPE);

void setup()
{
    dht.begin();
}

void loop()
{
    float humi = dht.readHumidity();
    float temp = dht.readTemperature();

    lcdDisplay(humi, temp);
    delay(500);
}

void lcdDisplay(float h, float t)
{
    // write code here
}
