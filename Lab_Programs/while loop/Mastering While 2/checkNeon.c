/*
Write a C program that takes a number as input from the user and determine whether the number is a neon number or not. Develop it by using while loop.

A Neon number is a number is a number where the sum of digits of square of the number is equal to the number itself.

For Example :
9 is a Neon number . Its square is 9*9 = 81 and sum of the digits 8+1 = 9 .So both are equal.

*/


#include<stdio.h>
int main()
{
        int n,sq,rem,sum=0,m;
        printf("Enter a Number ");
        scanf("%d",&n); 
        m=n;
        sq=n*n;
        
        while(sq!=0)
        {
            rem=sq%10;
            sum=sum+rem;
            sq=sq/10;
        }
        
        if(m==sum)  printf("%d is a Neon Number",m);
        else    printf("%d is not a Neon Number",m);
}