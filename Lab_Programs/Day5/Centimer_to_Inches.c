// Convert centimeters to inches
#include<stdio.h>
 void main()
{
    float cm,inch;
    printf("Enter the Centimeter ");
    scanf("%f",&cm);

    inch=cm*0.39;
    printf("%.2f cm is equal to %.2f inches",cm,inch);
    
}