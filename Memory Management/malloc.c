#include<stdio.h>
#include<stdlib.h>
int a;
int main()
{
    int *p, *q;
    p= (int *)malloc(10);       //10 bytes
    printf("P=%u\n",p);
    free(p);        //if we don't release the memory then it will give diff result
    q= (int *)malloc(10);
    printf("q=%u\n",q);

}

/*
with free function
P=11934536
q=11934536

without free function
P=7478088
q=7478112
*/