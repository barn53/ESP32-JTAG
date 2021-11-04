#include <Arduino.h>

void setup()
{
    pinMode(2, OUTPUT);
    Serial.begin(115200);
}

uint32_t c { 0 };
void loop()
{
    static uint32_t s;
    s = c;
    uint32_t l { c };
    digitalWrite(2, !digitalRead(2));
    Serial.printf("count: %u - %u - %u\n", c, s, l);
    ++c;
    delay(200);
}
