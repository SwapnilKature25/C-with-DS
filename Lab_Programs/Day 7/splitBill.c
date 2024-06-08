/*
Write a program that takes the total bill amount and the number of people from the user. Calculate and print the amount each person needs to pay, assuming an equal split of the bill.

Input :
-------
total bill( in float) ->1200.00
number of people(in int)-> 5

Output :
--------
amount each person needs to pay ->240
Note : you have to print the msg as it is shown in the example.
*/

#include<stdio.h>
#define pi 3.14
void main(){
    float bill;
    int num;
    printf("Total Bill : ");
    scanf("%f",&bill);
     printf("Number of People : ");
    scanf("%d",&num);
    
    printf("Amount each person need to pay is %.2f",bill/num);

    /*
    Total Bill : 1200
    Number of People : 5
    Amount each person need to pay is 240.00
    */

}