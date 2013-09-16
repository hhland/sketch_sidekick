/*
  siderkick plus demo
  Relay control LED

  Relay connect to D2

*/

const int pinRealy = 2;

void setup()
{
    pinMode(pinRealy, OUTPUT);
    digitalWrite(pinRealy, LOW);
}

void loop()
{
    digitalWrite(pinRealy, HIGH);
    delay(1000);
    digitalWrite(pinRealy, LOW);
    delay(1000);
}
