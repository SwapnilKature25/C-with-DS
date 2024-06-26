// Decimal to binary conversion
// 20 = 0000 0000 0001 0100

#include<stdio.h>
int main()
{
    int a[16]={0},i,n,j=0;
    printf("Enter the Decimal No. ");
    scanf("%d",&n);

    for(i=0; n!=0;i++,n=n/8)        //n=n/2  cause we are converting it to binary
    {
        a[i]=n%8;
    }
    printf("Octal Code : ");
    for(i=15; i>=0; i--,j++)
    {
        if(j%4==0)  printf(" ");
        printf("%2d",a[i]);
    }

/*
Enter the Decimal No. 20
Octal Code :   0 0 0 0  0 0 0 0  0 0 0 0  0 0 2 4
*/


}