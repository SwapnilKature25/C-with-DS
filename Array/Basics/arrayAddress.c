// Finding Array Address

#include<stdio.h>
int main()
{
    int a[]={10,12,14};
    printf("a[0] cell addr = %u\n",&a[0]); 
    printf("a stored value = %u\n",a);     
    printf("a address is = %u\n",&a);     
}

/*
a[0] cell addr = 6422292
a stored value = 6422292
a address is = 6422292
*/