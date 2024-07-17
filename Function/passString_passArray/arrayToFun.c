#include<stdio.h>
#include<string.h>
void show(int a[3])
{
    a[0]=100;
    a[1]=200;
    a[2]=300;
}
int main()
{
    int a[3]={1,2,3};
    show(a);
    printf("Array Elements are = %d  %d  %d",a[0],a[1],a[2]);
    // Array Elements are = 100  200  300 
}