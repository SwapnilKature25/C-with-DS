#include<stdio.h>
void main()
{
        int a=100, b=15;
        int *p, *q;


        printf("a value %d, b value %d\n", a,b);
        // %u beacause address can not be negative so we conclude it has unsighned int
        printf("a addr %u, b addr %u\n", &a , &b);

        p=&a;
        q=&b;
        printf("p value %u, q value %u\n", p , q);

}