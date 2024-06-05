// Finding Leap Year / Common Year

#include<stdio.h>
void main()
{
    int n;
    printf("Enter year no. ");
    scanf("%d",&n);

    if( n%4==0 && (n%100!=0 || n%400==0)) printf("Leap Year");
    else  printf("Common Year");

    // Enter year no. 1900
    // Common Year

    // Enter year no. 2024
    // Leap Year
    
    
}