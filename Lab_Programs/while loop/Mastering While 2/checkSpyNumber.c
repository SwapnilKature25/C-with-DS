/*
Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.

A Spy number is a number where the sum of its digits is equal to its product of its digits.

For Example : 
1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..

*/


#include<stdio.h>
int main()
{
        int n,m,rem=0,sum=0,prod=1;
        printf("Enter a Number ");
        scanf("%d",&n); 
        m=n;
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        if(prod==sum)   printf("%d is a spy number",m);
        else    printf("%d is not a spy number",m);


}