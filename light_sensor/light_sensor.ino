/*
  siderkick plus demo
  Light Sensor and LED Bar
  Light Sensor connect to A0
  LED Bar connect to D2~D11
*/

#define LEDNUM      10 

const int pinLedBar[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};           // pin define

void setup()
{
    for(int i=0; i<10; i++)
    {
        pinMode(pinLedBar[i], OUTPUT);
    }
}

void loop()
{
    int lightLevel = getLightLevel();

    setBar(lightLevel);

    delay(50);
}

// get sound sensor value and return level
int getLightLevel()
{

    unsigned int vol_t = 0;

    for(int i=0; i<32; i++)
    {
        vol_t += analogRead(A0);
    }

    vol_t = vol_t>>5;

    vol_t = map(vol_t, 0, 1023, 0, 10);

    return vol_t;

}

// set ler bar
void setBar(int vol_t)
{
    for(int i=0; i<LEDNUM; i++)
    {
        if(i<vol_t)
        {
            digitalWrite(pinLedBar[i], HIGH);
        }
        else 
        {
            digitalWrite(pinLedBar[i], LOW);
        }

    }
}

