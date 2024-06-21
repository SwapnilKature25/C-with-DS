/*
Write a C prgram that asks the user to input an integer and reverse that number and display the reverse of that given number.

Case-1
-------
Input as : 
Enter a number : 123

Output as : 
Reverse of the given number is : 321
*/


#include<stdio.h>
int main()
{
        int n,sum=0,rem=0;
        printf("Enter a Number ");
        scanf("%d",&n);
        printf("Reverse of the given number is ");
        if(n<0) printf("-",n=-n);
        while(n!=0)
        {
            rem=n%10;
            printf("%d",rem);
            n=n/10;
        }
}