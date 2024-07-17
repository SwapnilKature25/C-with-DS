#include<stdio.h>
int a=1;
int main()      //caller
{
    printf("%d\n",a);
    a++;
    if(a<7) main();     //callie
}

/*
1
2
3
4
5
6
*/