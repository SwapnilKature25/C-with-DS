#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5}, *p=a, i;
    p[0]=++p[2];
    *p=p[1]++;
    p=p+2;
    p[0]=p[2]--;
    printf("Elements \n");
    for(i=0; i<5; i++)  printf("%d  ",a[i]);

}

/*
Elements 
2  3  5  4  4
*/