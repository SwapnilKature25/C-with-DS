#include<stdio.h>
int main()
{
    // int *p;
    // p=p*2;
    // p=p%2;       //we can't do arithmetic operations on pointer
    // p=p/2;


    //  COmparing and Assigning pointers
    int a=10, *p=&a, *q;
    q=p;
    puts( p==q ? "Equal" : "Not equal");        //Equal
}
