/*
Write a C program to find the given number is even or odd. Take the input from the console by using scanf().
Don't use any control flow statement or ternary operator.
*/

#include<stdio.h>
#define pi 3.14
void main(){
    int num;
    printf("Enter the no. : ");
    scanf("%d",&num);

    (num%2==0) && (num>0) && printf("%d is an Even No.",num);
    (num%2!=0) && (num>0) && printf("%d is an odd No.",num);
    (num==0) && printf("Invalid input, no. should be greater than 0");

    /*
    Enter the no. : 0
I   nvalid input, no. should be greater than 0  

    Enter the no. : 12
    12 is an Even No.
    */

}