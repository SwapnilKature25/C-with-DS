#include<stdio.h>
long fact(int n)
{
    if(n!=0)    return n*fact(n-1);
    else return 1;
}
int main()      //caller
{
    int n;
    printf("enter num ");
    scanf("%d",&n);
    printf("%d Factorial is %d\n",n,fact(n));
}

/*
enter num 5
5 Factorial is 120
*/