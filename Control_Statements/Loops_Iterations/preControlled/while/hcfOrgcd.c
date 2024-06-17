/*
Finding hcf / gcd of given two numbers.
4 factors are 1, 2, 4
6 factors are 1, 2, 3, 6
*/


#include<stdio.h>
int main()
{
        int i=1,a,b,gcd;
        printf("Enter a,b Value ");         //
        scanf("%d %d",&a,&b);

        while(i<=a && i<=b )
        {
            if(a%i==0  && b%i==0)
            {
                gcd=i;
            }
            i++;
        }
        printf("gcd=%d",gcd);

        /*
            Enter a,b Value 4 6
            gcd=2

            Enter a,b Value 10 15
            gcd=5
        */
        

}