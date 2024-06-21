#include<stdio.h>
int main()
{
        // initialize sum=0 nor it will give garbaage val
        int n,rem,sum=0;
        printf("Enter n Value ");
        scanf("%d",&n);

        while(n!=0){
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        printf("Digits Sum is %d",sum);

/*
Enter n Value 456
Digits Sum is 15
*/
}