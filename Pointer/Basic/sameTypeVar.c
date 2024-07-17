/*
Pointer compatibility: pointer can store only the
same type of variable address. When we are
storing different type address, it return garbage or
runtime error as follows.
*/

#include<stdio.h>
int main()
{
    int a=100; 
    float *p=&a;     //not allowed
    printf("a=%d",*p);      //a=0
}