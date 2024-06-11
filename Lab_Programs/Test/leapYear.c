/*
Design a program that takes a year as input and determines whether it is a leap year or not. 
Consider the leap year rules (divisible by 4, but not divisible by 100 unless also divisible by 400) and use if-else statements to provide the appropriate output.

Input as : 
Enter year : 2020
Output as : 
It is a leap year.

*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year ");
    scanf("%d",&year);

    if(year%4==0 &&  ((year%100!=0) || (year%400==0)))
        puts("It is a Leap Year");
    else 
        puts("It is not a Leap Year");


    // Enter the Year 1700
    // It is not a Leap Year

    return 0;
}