/*
Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.

[if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8] 

Input as : 5678

Ouput as : 8
*/

#include<stdio.h>
int main()
{
        int n,c=0,sum=0,r,s;
        printf("Enter a Number ");
        scanf("%d",&n);

        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        if(sum>9)
        {
            while(sum!=0)
            {
                r=n%10;
                s=s+r;
                n=n/10;
            }
            printf("sum of digit of the sum : %d",s);
             
        }
        else  printf("sum of digit of the sum : %d",sum);
    return 0;
}