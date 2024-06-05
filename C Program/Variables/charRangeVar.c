#include<stdio.h>
void main()
{  
    // Only signed char
    // char a=65, b=66, c=a+b;
    // printf("c=%d\n",c);     // -125
    // c=260;
    // printf("c=%d\n",c);     // 4


    unsigned char a=65, b=66, c=a+b;
    printf("c=%d\n",c);     // 131
    c=-260;
    printf("c=%d\n",c);     // 252

}