#include<stdio.h>
int main()
{
    int *p;     // bad ptr
    {
        int a=100;  // local var
        p=&a;
        printf("a=%d\n",*p);        //100
    }       // a deleted
    printf("a=%d\n",*p);    // dangling pointer
    p=NULL;     //null pointer
    printf("a=%d\n",*p);        //blank
}

/*
a=100
a=100
a=0  // blank
*/