#include<stdio.h>
 
int main()
{
    int i,r=0,n,e,o,z;
    e=o=z=0;
    printf("Enter a number ");
    scanf("%d",&n);

    do{
        r=n%10;
        if(r==0)  z++;
        else if(r%2==0) e++;
        else o++;
        n=n/10;
    }while(n!=0);

    printf("Even=%d, Odd=%d, Zero=%d",e,o,z);
}