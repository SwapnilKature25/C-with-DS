#include<stdio.h>
int main()
{
        // Finding max, min digits of given no.

        long n;
        int max=-9, min=9, rem;
        printf("Enter n Value ");
        scanf("%d",&n);

        // if we use just while loop then 0 number will not print 
        // so to run the statement at least once we use do...while loop 
        do
        {
            rem=n%10;
            if(max<rem) max=rem;
            if(min>rem) min=rem;
            n=n/10;
        }while(n!=0);
        printf("Max is %d, Min is %d",max,min);

        // Enter n Value 1234
        // Max is 4, Min is 1


        // Enter n Value 0
        // Max is 0, Min is 0

}