#include "test.h"
#include <Wire.h>

void setup() {

    testfunc2();
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}

void loop() {

	digitalWrite(13, HIGH);
	delay(100);
	digitalWrite(13, LOW);
	delay(1000);
	Serial.println("yooo");
}
