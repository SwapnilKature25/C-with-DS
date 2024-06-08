/*
Write a program in C to input number of days. 
Find and display number of years, weeks, months and days.

Input as : 390
Output as : 1 Year, 3 Weeks, 0 Month, 4 Days

*/

#include<stdio.h>
void main(){
    int days,y,m,w;
    printf("Enter no. of Days : ");
    scanf("%d",&days);

    y=days/365;
    m=days%365/30;
    w=days%365%30/7;
    days=days%365%30%7;
    /*
    year=days/365;
    days=days%365;
    
    month=days/30;
    days=days%30;
    
    weeks=days/7;
    days=days%7;
    */
    printf(" %d Year, %d Weeks, %d Month, %d Days",y,w,m,days);
}