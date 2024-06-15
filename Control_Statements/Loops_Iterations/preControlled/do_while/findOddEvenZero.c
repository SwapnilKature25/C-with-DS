/*
Finding the no of even, odd, zero digits in given no.
Eg: 1023  1 even, 2 odd, 1 zero
*/
#include<stdio.h>
int main()
{
        long n;
        int r,e,o,z;
        printf("Enter n Value ");
        scanf("%d",&n);
        e=o=z=0;

        do
        {
            r=n%10;
            if(r==0)    z++;
            else if(r%2==0)    e++;
            else    o++;
            n=n/10;
        }while(n!=0);

        printf("Even Digits = %d, Odd Digits = %d, Zeros = %d",e,o,z);

     /*  Enter n Value 1023
         Even Digits = 1, Odd Digits = 2, Zeros = 1

        Enter n Value 1000 
        Even Digits = 0, Odd Digits = 1, Zeros = 3

        Enter n Value 1230045600
        Even Digits = 3, Odd Digits = 3, Zeros = 4

         */



}
