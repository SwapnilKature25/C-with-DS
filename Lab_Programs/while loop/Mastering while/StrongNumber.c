/*
Write a C program to check if a given number is a strong number. A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself. For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and determine whether it is a strong number or not.

Input as:
Enter a number : 145 

Output as:
145 is a strong number.
*/

#include<stdio.h>
int main()
{
        int n,i=1,rem=0,sum=0,m,f;
        printf("Enter a Number ");
        scanf("%d",&n); 
        m==n;
        while(n!=0)
        {
            f=1;
            rem=n%10;
            while(rem>=1)
            {
                f=f*rem;
                rem--;
            }
            sum=sum+f;
            n=n/10;
        }
        if(m==sum)    printf("%d is a Strong Number",m);
        else   printf("%d is not a Strong Number",m);

}