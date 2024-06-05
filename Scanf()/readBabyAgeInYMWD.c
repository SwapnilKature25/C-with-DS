// Read a baby age in no. of days and find the baby age in years, months, weeks, and days.

#include<stdio.h>
void main(){
    // if the no. of days incresed and show the output in - years then go for long int
    int age,y,m,w,d;
    printf("Enter the Baby age in Days : ");
    scanf("%d",&age);

    // We have this 1st way to calculate 
    y=age/365;
    m=age%365/30;
    w=age%365%30/7;
    d=age%365%30%7;

    // We have this 2nd way to calculate 
    // y=age/365;
    // age=age%365;
    // m=age/30;
    // age=age%30;
    // w=age/7;
    // d=age%7;
    printf("Baby age is %d year(s) : %d month(s) : %d week(s) : %d day(s) ", y,m,w,d);

    /*
    Enter the Baby age in Days : 500
    Baby age is 1 year(s) : 4 month(s) : 2 week(s) : 1 day(s) 

    Enter the Baby age in Days : 32768
    Baby age is 89 year(s) : 9 month(s) : 1 week(s) : 6 day(s)    
    */
}