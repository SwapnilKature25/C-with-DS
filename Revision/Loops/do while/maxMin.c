#include<stdio.h>
//Enter a number 324
// max= 4, min=2
int main()
{
    int n,max=-9,min=9,r;
    printf("Enter a number ");
    scanf("%d",&n);

    do{
        r=n%10;
        if(max<r)  max=r;
        if(min>r) min=r;
        n=n/10;
    }while(n!=0);
    printf("max= %d, min=%d",max,min);

}