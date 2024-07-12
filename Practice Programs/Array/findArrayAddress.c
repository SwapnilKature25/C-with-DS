#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    printf("a[0] cell address=%u\n",&a[0]);
    printf("a stored value=%u\n",a);
    printf("a address is=%u\n",&a);
}

/*
a[0] cell address=6422292
a stored value=6422292
a address is=6422292
*/