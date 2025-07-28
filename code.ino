#include <DHT.h>
#include <Servo.h>

#define DHTPIN     2
#define DHTTYPE    DHT11
#define SERVOPIN1  5
#define SERVOPIN2  6

DHT dht(DHTPIN, DHTTYPE);
Servo servo1;
Servo servo2;

uint32_t ms, msD;
float h = 0;
float t = 0;
float et = 0;

void setup()
{
  Serial.begin(9600);
  dht.begin();
  servo1.attach(SERVOPIN1);
  servo2.attach(SERVOPIN2);
}

void loop()
{
  ms = millis();
  if (ms - msD > 1000)
  {
    h = dht.readHumidity();
    t = dht.readTemperature();

    if (isnan(h) || isnan(t)) {
      Serial.println("Error reading from DHT11");
      return;
    }

    et = t - 0.4 * (t - 10) * (1.0 - (h / 100.0));

    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print(" %\tTemperature: ");
    Serial.print(t);
    Serial.print(" *C\tEffective Temperature: ");
    Serial.print(et);
    Serial.println(" *C");

    msD = ms;

    if (et < 26) {
      servo1.write(95);
      delay(300);
      servo2.write(120);
    }
    else if (et >= 26 && et <= 28) {
      servo2.write(70);
      delay(100);
      servo1.write(80);
    }
    else if (et > 28) {
      servo1.write(0);
      delay(200);
      servo2.write(118);
    }
  }
}
