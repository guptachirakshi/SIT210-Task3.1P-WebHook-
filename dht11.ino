// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

DHT dht(D4, DHT22);

int led = D7;

void setup()
{
    pinMode(led, OUTPUT);
    dht.begin();
}
void loop() 
{
    digitalWrite(led, HIGH);
    
    float temp = dht.getTempCelcius();
    Particle.publish("temp", String(temp), PRIVATE);
    delay(30000);
    
    digitalWrite(led, LOW);
    delay(30000);
}