// n=5  1-2+3-4+5=3


#include<stdio.h>
int main()
{
        int n, sum=0;
        printf("Enter the Value ");         //
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            if(n%i==0)  sum-=i;
            else    sum+=i;
        }

        printf("The sum of the series for n = %d is %d\n", n, sum);

        // Enter the Value 5
        // The sum of the series for n = 5 is 3
}