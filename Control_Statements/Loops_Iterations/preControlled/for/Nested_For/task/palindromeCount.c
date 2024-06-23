// Printing 1..n palindromes and count:

#include<stdio.h>
int main()
{   
    int n,rev,i,j,r,c=0;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i,rev=0; j!=0; j/=10)
        {
            r=j%10;
            rev=rev*10+r;
        }
        if(i==rev)  printf("%4d ",i,c++);
    }
    printf("\n%d Palindrome",c);
    
}