/*
Develop a program to calculate the volume of a sphere and take the radius input from user by using scanf.
*/

#include<stdio.h>
#define pi 3.14
void main(){
    float r;
    printf("Enter the radius of the sphere:  ");
    scanf("%f",&r);

    printf("Volume of the sphere is: %.2f cubic units", (4.0/3.0)*pi*(r*r*r));

    //Enter the radius of the sphere:  5
    // Volume of the sphere is: 523.33 cubic units 
}