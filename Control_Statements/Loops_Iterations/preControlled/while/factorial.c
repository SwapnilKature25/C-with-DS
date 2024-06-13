#include<stdio.h>
int main()
{
        int n;
        long f=1;
        // f=1 is compulsory to give
        printf("Enter n Value ");
        scanf("%d",&n);

        while(n>=1){
            f=f*n;
            n--;
        }
        printf("Factorial : %d",f);

}