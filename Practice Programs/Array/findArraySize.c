#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    float b[]={1,2,3};
    printf("%d bytes\n",sizeof(a));             
    printf("%d cells\n",sizeof(a)/sizeof(int));
    printf("%d cells\n",sizeof(a)/sizeof(a[0]));

    printf("%d bytes\n",sizeof(b));             
    printf("%d cells\n",sizeof(b)/sizeof(int));
    printf("%d cells\n",sizeof(b)/sizeof(b[0]));
}

/*
12 bytes
3 cells
3 cells

12 bytes
3 cells
3 cells
*/