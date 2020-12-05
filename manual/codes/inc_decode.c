//Code written on December 5, 2020
// by G V V Sharma
//This program implements a boolean function in C

#include <stdio.h>

//The  main function
int main(void)
{

int Z=1,Y=0,X=0,W=1;//inputs
int A,B,C,D;//outputs

D = (W&X&Y&(~Z))|((~W)&(~X)&(~Y)&Z);//Boolean function

printf("%x\n",D);//Output D
return 0;
}
