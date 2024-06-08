/*
Write a C program that takes 2 number as input and store that number in a variable, First input for radius of a Circle and 2nd input for side of a Square. 
Then calculate the area of Circle and Square and display it.
*/

#include<stdio.h>
#define pi 3.14
void main(){
    float r,s;
    printf("Enter radius of Circle : ");
    scanf("%f",&r);
    printf("Enter Side of Square : ");
    scanf("%f",&s);

    printf("Area of Circle : %.2f\n",(pi*r*r));
    printf("Area of Square : %.2f",s*s);

    /*
    Enter radius of Circle : 12
    Enter Side of Square : 5
    Area of Circle : 452.16
    Area of Square : 25.00
    */
}