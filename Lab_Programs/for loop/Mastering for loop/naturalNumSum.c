#include<stdio.h>
int main()
{
        int n,sum=0,f=1,m;
        printf("Enter a Number ");
        scanf("%d",&n);
        m=n;
        printf("\nThe first %d natural number is : ",n);
        for(int i=1; i<=n; i++)
        {
            sum=sum+i;
            printf("%d ",i);
            
        }
        printf("\nThe Sum of Natural Numbers upto %d terms : %d",m,sum);

}