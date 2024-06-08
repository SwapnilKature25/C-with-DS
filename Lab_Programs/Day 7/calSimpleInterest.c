/*
Create a program that takes the principal amount, interest rate, and time in years from the user 
and calculates the simple interest. Print the result with appropriate messages.
*/

#include<stdio.h>
#define pi 3.14
void main(){
    float p,r,t;
    printf("Enter principle amount : ");
    scanf("%f",&p);

    printf("Enter Interest Rate(in Percentage)  : ");
    scanf("%f",&r);

    printf("Enter time in years : ");
    scanf("%f",&t);

    printf("Simple Interest is : %.2f",(p*r*t)/100);

    /*
    Enter principle amount : 4000
    Enter Interest Rate(in Percentage)  : 5
    Enter time in years : 3
    Simple Interest is : 600.00
    */
}