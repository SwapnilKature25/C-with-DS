/*
write a C program to find the factorial of a given number. Take the input from the user.

Input as :
Enter a number : 5

Output as :
Factoria of 5 : 120

*/


#include<stdio.h>
int main()
{
        int n,sum=0,f=1;
        printf("Enter a Number ");
        scanf("%d",&n);

        while(n>=1)
        {
            f=f*n;
            n--;
        }
        printf("Factoria of %d",f);

}