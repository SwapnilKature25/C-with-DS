/*
Enter a Number 4
The number 4 is a Even number.
*/

#include<stdio.h>
int evenOdd(int n)
{
    if(n%2==0)  return 1;
    else return 0;
}
int main()
{
    int num;
    printf("Enter a Number ");
    scanf("%d",&num);
    int s=evenOdd(num);
    if(s==1)    printf("The number %d is a Even number.",num);
    else printf("The number %d is not a Odd number.",num);
}