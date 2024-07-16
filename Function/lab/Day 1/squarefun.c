/*
Enter a Number 20
The square of 20 is : 400.00
*/

#include<stdio.h>
int squareFun(int n)
{
    return n*n;
}
int main()
{
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);
    float sq=squareFun(a);
    printf("The square of %d is : %.2f",a,sq);
}