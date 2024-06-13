#include<stdio.h>
int main()
{
        // Find the no of digits in given no.

        int n,count=0;
        printf("Enter n Value ");
        scanf("%d",&n);

        // while(n!=0){
        //     count++;
        //     n=n/10;
            
        // }
        // printf("count : %d\n",count);


        // Without using loop:

        count=printf("%d",n);
        if(n<0) count--;
        printf("No. of Digits = %d",count);
        
}