#include<stdio.h>
int main()
{
        int  n;
        printf("Enter n Value ");
        scanf("%d",&n);

        while(n>=1)
        {
            printf("%4d",n--);
            // n--;
        }

}