#include<stdio.h>
int main()
{
// Finding first and last digit of given no.
        int n,last;
        printf("Enter n Value ");
        scanf("%d",&n);
        last=n%10;
        printf("last Digit is %d\n",last);
        while(n>9 || n<-9)      //n>9 || n<-9 condition is for single digit numbers
        {
            n=n/10;
        }
        printf("First Digit is %d",n);

        // Enter n Value -2018
        // last Digit is -8
        // First Digit is -2


        // Enter n Value 2615
        // last Digit is 5
        // First Digit is 2

        // Enter n Value -8
        // last Digit is -8
        // First Digit is -8

}