/*
Write a C program that prompts the user to enter a number and then prints the multiplication table for that number using a while loop.

*/

#include<stdio.h>
int main()
{
        int n,i=1;
        printf("Enter a Number ");
        scanf("%d",&n);

        while(i<=10)
        {
            printf("%d * %d = %2d\n",n,i, (n*i));
            i++;
        }
    return 0;

}