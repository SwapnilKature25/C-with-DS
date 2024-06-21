/*
Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.

Input as:
Enter a number : 121 

Output as:
121 is a Palindrome number.
*/

#include<stdio.h>
int main()
{
        int n,rem=0,sum=0,m;
        printf("Enter a Number ");
        scanf("%d",&n);     //121
        m=n;
        while(n!=0)
        {
            rem=n%10;       //1
            sum=sum*10+rem;     //0*10+1=1
            n=n/10;
        }
        if(m==sum)  printf("%d is a Palindrome number. ",sum);
        else  printf("%d is not a Palindrome number. ",sum);

}
