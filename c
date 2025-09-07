#include "SevSeg.h"
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9
int pin[]={2,3,4,5,6,7,8,9};
int digitzero[]={0,0,0,0,0,0,1};
int digitone[]={1,0,0,1,1,1,1};
int digittwo[]={0,0,1,0,0,1,0};
int digitthree[]={0,0,0,0,1,1,0};
int digitfour[]={1,0,0,1,1,0,0};
int digitfive[]={0,1,0,0,1,0,0};
int digitsix[]={0,1,0,0,1,0,0};
int digitseven[]={0,0,0,1,1,1,1};
int digiteight[]={0,0,0,0,0,0,0};
int digitnine[]={0,0,0,0,1,0,0};
void setup(){
  for (int i=0;i<8;i++)
}
void print_zero(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digitzero[i]);
}
void print_one(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digitone[i]);
}
void print_two(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digittwo[i]);
}
void print_three(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digitthree[i]);
}
void print_four(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digitfour[i]);
}
void print_five(){
  for (int i=0;i<8;i++)
    digitalWite(pin[i],digitfive[i]);
}
void print_six(){
  for (int i=0;i<8;i++)
    digitalWrite(pin[i],digitsix[i]);
}
void print_seven(){
  for (int i=0;i<8;i++)
    digitWrite(pin[i],digitseven[i]);
}
void print_eight(){
  for (int i=0;i<8;i++)
    digitWrite(pin[i],digiteight[i]);
}
void print_nine(){
  for (int i=0;i<8;i++)
    digitWrite(pin[i],digitnine[i];
}
void loop(){
  print_zero();
delay(500);
print_one();
delay(500);
print_two();
delay(500);
print_three();
delay(500);
print_four();
delay(500);
priny_five();
delay(500);
print_six();
delay(500);
print_seven();
delay(500);
print_eight();
delay(500);
print_nine();
delay(500);
}
