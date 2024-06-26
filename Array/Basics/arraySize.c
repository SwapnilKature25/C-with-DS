// Finding Array size

#include<stdio.h>
int main()
{
    // int a[3]={10,12,14};
    int a[]={10,12,14};
    printf("%d bytes\n",sizeof(a));     //3*4=12
    printf("%d cells\n",sizeof(a)/sizeof(int));     //12/4=3
    printf("%d cells\n",sizeof(a)/sizeof(a[0]));    //12/
}

/*
12 bytes
3 cells
3 cells
*/