
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
    if(n==1)    puts("Magic no.");
    else  puts("Not a Magic no");

    printf("Generic root = %ld",n);

    // Enter a number1234
// Magic no.
// Generic root = 1
}