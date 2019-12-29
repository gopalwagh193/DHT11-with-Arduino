#include <dht.h>
dht DHT;
#define DHT11_PIN D4

void setup()
{
  Serial.begin(9600);
  pinMode(D4,INPUT);
}

void loop()
{
  int d=DHT.read11(DHT11_PIN);
  Serial.print("TEMP:");
  Serial.println(DHT.temperature);

  Serial.print("HUM:");
  Serial.println(DHT.humidity);
}
