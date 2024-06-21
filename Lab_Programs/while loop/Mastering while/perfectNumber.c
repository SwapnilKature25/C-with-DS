/*
Write a C program to check the given number is a perfect number or not?
If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

6 multiples are 1,2,3,6 : sum of multiples = 1+2+3 = 6
6 is a perfect number.

*/


#include<stdio.h>
int main()
{
        int n,i=1,rem=0,sum=0,m;
        printf("Enter a Number ");
        scanf("%d",&n); 
        m=n;
        while(i<n)
        {
            if(n%i==0)  {
                sum=sum+i;
            }
            i++;
        }
        if(m==sum)  printf("%d is a perfect number.",sum);
        else  printf("%d is not a perfect number.",sum);

}