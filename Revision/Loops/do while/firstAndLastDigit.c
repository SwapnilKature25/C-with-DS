#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    
    printf("last=%d ",n%10);
    while(n>9 || n<-9){
        n=n/10;
    }
    printf("first=%d ",n);
    

}