#include<stdio.h>
int main()
{
        int n,sum=0,f=1,r,m;
        printf("Enter a Number ");
        scanf("%d",&n);
        m=n;
        for(int i=1; i<=n; i++)
        {
            f=f*i;
            sum+=f;
        }
        printf("The sum of the factorial series up to %d terms is: %d",m,sum);

}