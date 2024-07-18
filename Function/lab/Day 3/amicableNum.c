/*
Write a program to find and display all pairs of amicable numbers within a given range, by using different user defined functions.

Amicable numbers are pairs of numbers where the sum of the proper divisors of one number is equal to the other number.
*/

 #include<stdio.h>
int amicablePairs()
{
    long int i,j,s,k,a,b,r,sum=0;
    for(i=100; i<1000; i++)
    {
        a=i,s=0,b=0,sum=0;
        for(j=i/2,k=1; j>0; j--,k++)
        {
            if(a%k==0)
            {
                printf("%ld ",k);
                s+=k;
             }
        }
        printf("%10ld ",s);
        printf("\n");
        b=s;
        for(r=s/2,k=1; r>0; r--,k++)
             {
                 if(b%k==0)
                {
                    printf("%ld ",k);
                    sum+=k;
                }
         }
        printf("%10ld ",sum);
        if(a==sum)   printf("%d, %d ",a,b);
         printf("\n");
        
    }
    

}
int main()
{
    amicablePairs();

}