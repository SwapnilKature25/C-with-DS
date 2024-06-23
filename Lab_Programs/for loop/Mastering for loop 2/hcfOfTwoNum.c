
#include<stdio.h>
int main()
{
        int a,b,c=0,sum=0,r,s,i,hcf;
        printf("Enter two Numbers ");
        scanf("%d %d",&a,&b);
        int min=a<b ? a : b;
        for(  i=1; i<=min; i++)
        {
            if(a%i==0 && b%i==0)    hcf=i;
        }
        printf("The HCF of %d and %d is %d",a,b,hcf);

}