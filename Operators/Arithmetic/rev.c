#include<stdio.h>
void main()
{
    int n=321;
    printf("%d",(n%10));    //1
    n=n/10;                 //32
    printf("%d%d",(n%10),(n/10));   //32%10=2   //3
}