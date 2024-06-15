// Reverse no:
// 1234 reverse is 4321

#include<stdio.h>
int main()
{
        long n;
        int rem,rev=0,m;
        printf("Enter n Value ");
        scanf("%d",&n);

        m=n;
        if(n<0) printf("-",n=-n);
        
        do{
            rem=n%10;
            if(rem==0)  printf("%d",rem);
            rev=rev*10+rem;
            n=n/10;
        }while(n!=0);

        // printf("%d reverse is %ld",m,rev);
        printf("%ld",rev);

        /*
             Enter n Value -107
            -107 reverse is -701

            Error :::
            Enter n Value -100100
            -00001001
        */

}