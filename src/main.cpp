#include <Arduino.h>

#define CH1 4
#define CH2 5

int ch1Value;
int ch2Value;

int readChannel(int pin){
  int value = pulseIn(pin, HIGH);
  return value;
}


void setup() {
  Serial.begin(9600);
}

void loop() {
  ch1Value = readChannel(CH1);
  ch2Value = readChannel(CH2);

  Serial.print("Channel 1: ");
  Serial.println(ch1Value);
  Serial.print("Channel 2: ");
  Serial.println(ch2Value);
  Serial.print("\r");

  delay(100);
}
