#include<stdio.h>
 
int main()
{
    int i,c=0,n;
    printf("Enter a number ");
    scanf("%d",&n);

    // do{
    //     n=n/10;
    //     c++;
    // }while(n!=0);
    // printf("%d",c);

    // without using loop
    c=printf("%d ",n);
    if(n<0) c--;
    printf(" is a %d digits no.",c);

}