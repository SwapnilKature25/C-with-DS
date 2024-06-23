// Finding generic root of given no:
// 5677 = 5 + 6 + 7 + 7 = 25  2+5=7

#include<stdio.h>
int main()
{   
    int n,r=0,s=0;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>9 || n<-9)
    {
        for(s=0; n!=0; n=n/10)
        {
            s=s+n%10;
        }
        n=s;
    }
    printf("Generic root = %ld",n);
}