#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5}, *p=&a, i;
    p++;    printf("%d\n",*p);
    ++p;    printf("%d\n",*p);
    *p++;    printf("%d\n",*p);
    ++*p;    printf("%d\n",*p);
    (*p)++;    printf("%d\n",*p);
    p=p-3;
    --*p;  printf("%d\n",*p);
    printf("Elements \n");
    for(i=0; i<5; i++)  printf("%d  ",*(p+i));
}

/*
2
3
4
5
6
0
Elements
0  2  3  6  5
*/