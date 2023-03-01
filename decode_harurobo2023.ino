#include <FlexCAN.h>


FlexCAN CANbus(1000000);

void setup(void) {
  Serial.begin(115200);
  CANbus.begin();
  
}
   
void loop() {
  int servo = buf%2;
  int syl1 = (buf>>1)%2;
  int syl2 = (buf>>2)%2;
  int motor = 0;
  if((buf>>3)%2){
    motor = buf>>4;
  }
  else{
    motor = -1*buf>>4;
  }
}

