#include<stdio.h>
void swap(int *a, int *b)
{
    // 3 ways of swapping
    // int temp=*a;
    // *a=*b;
    // *b=temp;

    // *a=*a+*b;
    // *b=*a-*b;
    // *a=*a-*b;

    // *a=*a * *b;
    // *b=*a / *b;
    // *a=*a / *b;
}
void main()
{
    int x=5,y=7;
    printf("Before fun call a=%d, b=%d\n",x,y);
    swap(&x,&y);
    printf("After fun call a=%d, b=%d\n",x,y);
}

/*
Before fun call a=5, b=7
After fun call a=7, b=5
*/