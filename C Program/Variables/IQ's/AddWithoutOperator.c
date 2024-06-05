#include<stdio.h>
void main()
{  
    int a=10,b=20;
    // These are the 4 ways to add numbers without  + operator
    printf("Sum=%d\n",a-(-b));      //30
    printf("Sum=%d\n",a- -b);       //30
    printf("Sum=%d\n",a-(~b)-1);       //30
    printf("Sum=%d\n",-(-a-b));       //30
}