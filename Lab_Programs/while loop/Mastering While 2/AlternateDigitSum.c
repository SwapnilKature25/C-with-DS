/*
Write a C program to find the alternate digit sum is same or not.

Example-1 as: 12345
1+3+5=9
2+4=6
Output as: Alternate digit sum is not same.

Example-2 as: 12122
1+1+2=4
2+2=4

Output as : Alternate digit sum is same.

*/

#include<stdio.h>
int main()
{
        int n,i=0,rem,p=0,m,a=0;
        printf("Enter a Number ");
        scanf("%d",&n); 
        m=n;
        while(n>0)      //12122
        {
            rem=n%10;       //2
            if(i%2==0)  p=p+rem;        //2=> 0+2 =2    //2+
            else a=a+rem;   //

            i++;    //
            n=n/10;     //1212
        }

        if(p==a)  printf("Alternate Digit sum is same");
        else    printf("Alternate Digit sum is not same");


}