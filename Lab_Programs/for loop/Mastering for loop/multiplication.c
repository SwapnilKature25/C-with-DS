
#include<stdio.h>
int main()
{
        int n,rem=0,sum=0,m;
        printf("Enter a Number ");
        scanf("%d",&n); 

        for(int i=1; i<=10; i++)
        {
            printf("%d * %2d = %3d\n",n,i,n*i);
        }

}