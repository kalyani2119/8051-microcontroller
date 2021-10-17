# 8051-microcontroller
To code four LED's on and four LED's off
#include<reg51.h>
//for 11.0592 MHZ crystal
void delay(unsigned int count)
{
unsigned int i;
while(count)
{
i=115;
while(i>0)
i--;
counter--;
}
}
void main()
{
while(1)
{
p2=0xF0;
delay(1000);
p2=0x0F;
delay(1000);
}
}
