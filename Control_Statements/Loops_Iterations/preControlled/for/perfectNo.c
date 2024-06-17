/*
Perfect no:
6 factors sum is 1+2+3=6
28 factors sum is 1+2+4+7+14=28
*/

#include<stdio.h>
int main()
{
        
        int n,s=0;
        printf("Enter the Number ");        
        scanf("%d",&n);

        for(int i=1; i<n; i++)
        {
            if(n%i==0)  s=s+i;
        }
        printf( n==s ? "Perfect no" : " Not a Perfect no");
        // Enter the Number 6
        // Perfect no
}