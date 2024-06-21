#include<stdio.h>
int main()
{
        int n,sum=0,m;
        printf("Enter a Number ");
        scanf("%d",&n);
        m=n;
        for(int i=1; i<n; i++)
        {
            if(n%i==0)  sum=sum+i;
        }
        if(m==sum)  printf("%d is a Perfect Number",m);
        else   printf("%d is not a Perfect Number",m);
}