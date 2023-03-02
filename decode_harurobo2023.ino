#include <FlexCAN.h>


FlexCAN CANbus(1000000);
CAN_message_t txmsg;

void setup() {

}
   
void loop() {
  int servo = txmsg.buf[0]%2;
  int syl1 = (txmsg.buf[0]>>1)%2;
  int syl2 = (txmsg.buf[0]>>2)%2;
  int motor;
  if((txmsg.buf[0]>>3)%2){
    motor = txmsg.buf[0]>>4;
  }
  else{
    motor = -1*(txmsg.buf[0]>>4);
  }
}

