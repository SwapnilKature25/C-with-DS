/*
Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.

Input as : 
Enter n value : 10

Output as :
Sum of the natural number from 1 to 10 : 55
*/


#include<stdio.h>
int main()
{
        int n,m,sum=0;
        printf("Enter a Number ");
        scanf("%d",&n);
        m=n;
        while(n>=1)
        {
            sum=sum+n;
            n--;
        }

        printf("Sum of the natural number from 1 to %d : %d",m,sum);

}
