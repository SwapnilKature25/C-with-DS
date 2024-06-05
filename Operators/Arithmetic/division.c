#include<stdio.h>
void main()
{
    /*
    In Division if both operands are int then result also int and 
    if anyone or both are floats then result also float
    */

  // Note : Any no./10 removes last digit    

   float a=5/2;     //2.000000
   float x=(float)5/2;  //2.500000
   float b=5.0/2;
   float c=5/2.0;
   float d=5.0/2.0;
   printf(" %f\n %f\n %f\n %f\n %f",a,x,b,c,d);

}