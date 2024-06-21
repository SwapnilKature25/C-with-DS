/*
Write a C program that asks the user to input an integer and count the digts and print the count of the digits.

Input as : 
Enter a number : 546

Output as :
Count of the digits is : 3

*/

#include<stdio.h>
int main()
{
        int n,rem,sum=0,count=0;
        printf("Enter a Number ");
        scanf("%d",&n);
        if(n==0)    count++;
        while(n!=0)
        {
            count++;
            rem=n%10;
            n=n/10;            
        }
        printf("Count of Digits is %d",count);

        
}