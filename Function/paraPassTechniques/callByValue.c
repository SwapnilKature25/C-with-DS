#include<stdio.h>

// Any change in Formal Parameters doesn't effect's the value of actual parameter.


// void sqr(int n)
// {
//     n=n*n;
// }       //here n is deleted after the fun execution
// void main()
// {
//     int a=5;
//     printf("Before Function call a= %d\n",a);
//     sqr(a);
//     printf("After Function call a= %d\n",a);
// }
/*
Before Function call a= 5
After Function call a= 5
*/


void show(int x)        //Formal Parameters
{
    x=200;
}
void main()
{
    int x=100;
    printf("Before Function call a= %d\n",x);
    show(x);            // Actual Parameters
    printf("After Function call a= %d\n",x);
}

/*
Before Function call a= 100
After Function call a= 100
*/