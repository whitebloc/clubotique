#include "SR04.h"
#define TRIG_PINc1 (pin1)
#define ECHO_PINc1 (pin2)
#define TRIG_PINc2 (pin3)
#define ECHO_PINc2 (pin4)
#define TRIG_PINc3 (pin5)
#define ECHO_PINc3 (pin6)
SR04 sr04c1 = SR04(ECHO_PINc1,TRIG_PINc1);
long ac1;
SR04 sr04c2 = SR04(ECHO_PINc2,TRIG_PINc2);
long ac2;
SR04 sr04c3 = SR04(ECHO_PINc3,TRIG_PINc3);
long ac3;

void setup() {
   Serial.begin(9600);
   delay(1000);
}

void loop() {
   a=sr04c1.Distance();
   Serial.print(ac1);
   Serial.println("cm");
   a=sr04c2.Distance();
   Serial.print(ac2);
   Serial.println("cm");
   a=sr04c3.Distance();
   Serial.print(ac3);
   Serial.println("cm");
}
