#include<stdio.h>
int main()
{
        int i=1,n, sum=0,mean=0;
        printf("Enter n Value ");
        scanf("%d",&n);

        // while(i<=n){
        //     sum=sum+i;
        //     i++;
        // }
        // printf("sum=%d , mean=%d",sum,sum/n);


        // Without Using loops
        // s=n* (n+1)/2;
        // s=4*(4+1)/2;

        sum=n*(n+1)/2;
        printf("sum=%d , mean=%.2f",sum,(float)sum/n);
        

}