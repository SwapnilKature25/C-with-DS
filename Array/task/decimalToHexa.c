// Decimal to binary conversion
// 20 = 0000 0000 0001 0100

#include<stdio.h>
int main()
{
    int a[16]={0},i,n,j=0;
    printf("Enter the Decimal No. ");
    scanf("%d",&n);

    for(i=0; n!=0;i++,n=n/16)        //n=n/2  cause we are converting it to binary
    {
        a[i]=n%16;
    }
    printf("Hexadecimal Code : ");
    for(i=15; i>=0; i--,j++)
    {
        if(j%4==0)  printf(" ");
        if(a[i]<10)   printf("%2d",a[i]);
        else    printf("%2c",87+a[i]);
    }


/*
Enter the Decimal No. 45
Hexadecimal Code :   0 0 0 0  0 0 0 0  0 0 0 0  0 0 2 d
*/


}