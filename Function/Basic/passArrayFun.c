#include<stdio.h>
void show(int a[3])     //or a[] or *a
{
    a[0]=100; a[1]=200; a[2]=300;
}
void main()
{
    int a[3]={10,20,30};
    show(a);
    printf("Array Elements %d %d %d",a[0],a[1],a[2]);
}
//Array Elements 100 200 300