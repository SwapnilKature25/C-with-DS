// n=5 => 1+1/1+1/2+1/3+1/4+1/5=3.28

#include<stdio.h>
int main()
{
        int n;
        float sum=0.0;
        printf("Enter the Value ");         //
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            sum+=1.0/i;
        }
        
        printf("sum=%.2f",sum);

        // Enter Value 5
        // sum=2.28

}