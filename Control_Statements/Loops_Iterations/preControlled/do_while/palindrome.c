// Finding palindrome:
// 121 reverse is 121

#include<stdio.h>
int main()
{
        long n;
        int rem,rev=0,m;
        printf("Enter n Value ");
        scanf("%d",&n);
        m=n;
        do
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }while(n!=0);

        // if(m==rev)  printf("%d is palindrome",m);
        // else    printf("%d is not palindrome",m);

        puts((m==rev) ? "Palindrome ": "Not a Palindrome");

        // Enter n Value 454
        // 454 is palindrome

        // Enter n Value -343
        // Palindrome

}