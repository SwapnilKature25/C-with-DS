// 12345678  =>  78 56 34 12

#include<stdio.h>
int main()
{
        long n;
        long rem,rev=0,m;
        printf("Enter n Value ");
        scanf("%d",&n);
        if(n<0)     printf("-",n=-n);
        do
        {
            rem=n%100;
            if(n>9 && rem<10)  printf("0");     //used to print 0's like 1200  => 00 12
            printf("%d ",rem);
            n=n/100;
        }while(n!=0); 

        /*
            Enter n Value 0         //for 0 we have to use do..while

            whenever u want to print 0 then use do..while loop
            Enter n Value 0
            0


            Enter n Value 10000002
            2 00 00 10 
        */
}