// Eg: 2 swapping of two integers

#include<stdio.h>
void swap(int a, int b)     // Formal Paramters
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void main()
{
    int a=5,b=7;
    printf("Before fun call a=%d, b=%d\n",a,b);
    swap(a,b);          //Actual Paramters
    printf("After fun call a=%d, b=%d\n",a,b);
}

/*
Before fun call a=5, b=7
After fun call a=5, b=7
*/