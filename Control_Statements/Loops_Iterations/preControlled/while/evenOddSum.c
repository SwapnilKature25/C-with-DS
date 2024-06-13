#include<stdio.h>
int main()
{
        int i=1,n, evenSum=0,oddSum=0;
        printf("Enter n Value ");
        scanf("%d",&n);

        while(n>=1){
            if(n%2==0)  evenSum=evenSum+n;
            else oddSum=oddSum+n;
            n--;
        }
        printf("Even Sum=%d\n Odd Sum=%d",evenSum,oddSum);

        // Enter n Value 5
        // Even Sum=6
        // Odd Sum=9
}