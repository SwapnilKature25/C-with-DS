
/*
Any Change in formal parameter effects the actual parameter address.

Hence pointers allows the local variables to access outside the functions and this process is called call by address / reference.
*/


#include<stdio.h>
// void sqr(int *n)
// {
//     *n=*n * *n;
// }
// void main()
// {
//     int a=5;
//     printf("Before Function call a=%d\n",a);
//     sqr(&a);        //fun calling with Address
//     printf("After Function call a=%d\n",a);
// }

/*
Before Function call a=5
After Function call a=25
*/


void show(int *x)
{
    *x=200;
}
void main()
{
    int x=100;
    printf("Before fun call x=%d\n",x);
    show(&x);
    printf("After fun call x=%d\n",x);

}

/*
Before fun call x=100
After fun call x=200
*/