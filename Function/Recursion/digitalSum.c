#include<stdio.h>
int dsum(long int n)
{
    static int s;
    if(n!=0)
    {
        s+=n%10;
        dsum(n/10);
    }
    return s;
}
int main()
{
    printf("123 digital sum = %d",dsum(123));
}

/*
123 digital sum = 6
*/