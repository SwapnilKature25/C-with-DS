
#include<stdio.h>
int main()
{
        int n;
        float sum=1;
        printf("Enter a Number ");
        scanf("%d",&n);
        printf("Harmonic Series : 1- ");
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)   
            {
                printf("1/%d+ ",i);
                sum=sum-1.0/i;
            }
            else {
                printf("1/%d- ",i);
                sum=sum+1.0/i;
            }
        }
        printf("\b\bSum of the series: %f",sum);
}