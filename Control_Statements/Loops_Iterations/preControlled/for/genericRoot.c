#include<stdio.h>
#include<dos.h>
int main()
{   
    long n,s;
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
    printf("Generic root is %ld",s);
}