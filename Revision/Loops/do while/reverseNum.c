#include<stdio.h>
int main()
{
    int r,n,rev;
    printf("Enter a num ");
    scanf("%d",&n);
    printf("%d reverse is ",n);
    if(n<0) printf("-",n=-n);
    do{
        r=n%10;
        printf("%d",r);
        n=n/10;
    }while(n!=0);

}