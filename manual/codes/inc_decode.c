//Code written on December 5, 2020
// by G V V Sharma
//This program implements a boolean function in C

#include <stdio.h>

//The  main function
int main(void)
{

int Z=0x00,Y=0x01,X=0x01,W=0x01;//inputs in hex	
int one = 0x01;
int A,B,C,D;//outputs

D = (W&X&Y&(~Z))|((~W)&(~X)&(~Y)&Z);//Boolean function for D
A = ((~W)&(~X)&(~Y)&(~Z))|((~W)&(X)&(~Y)&(~Z))|((~W)&(~X)&Y&(~Z))|((~W)&X&Y&(~Z))|((~W)&(~X)&(~Y)&(Z));
//Boolean function for A

printf("%x\n",one&D);//Output D
printf("%x\n",one&A);//Output D
return 0;
}
