#include<stdio.h>
#define pi 3.14         // Macro  i.e 2nd way
void main()
{  
    // const float pi=3.14;     //1st way
    float area,r,cf;
    printf("\nEnter the circle radius ");
    scanf("%f",&r);
    area =pi * r * r;
    cf= 2 * pi * r;
    printf("Area=%.2f,  cf=%.2f",area,cf);

    // o/p: Enter the circle radius 10
         // Area=314.00,  cf=62.80

    //  Enter the circle radius 2
     // Area=12.56,  cf=12.56
}