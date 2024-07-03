// Finding array address:
#include<stdio.h>
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    printf("a stored addr is %u\n",a);
    printf("a[0] stored addr is %u\n",a[0]);
    printf("a[1] stored addr is %u\n",a[1]);

    /*
    a stored addr is 6422280
    a[0] stored addr is 6422280
    a[1] stored addr is 6422292
    */

    float b[2][3]={1,2,3,4,5,6};
    printf("b stored addr is %u\n",b);
    printf("b[0] stored addr is %u\n",b[0]);
    printf("b[1] stored addr is %u\n",b[1]);

/*
b stored addr is 6422256
b[0] stored addr is 6422256
b[1] stored addr is 6422268
*/



    char c[2][3]={1,2,3,4,5,6};
    printf("c stored addr is %u\n",c);
    printf("c[0] stored addr is %u\n",c[0]);
    printf("c[1] stored addr is %u\n",c[1]);

    /*
    c stored addr is 6422250
    c[0] stored addr is 6422250
    c[1] stored addr is 6422253
    */

}