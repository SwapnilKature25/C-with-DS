/*
Finding pointer size:
Always pointer variable stores address and
address is unsigned int. due to this any type of
pointer it takes 2 / 4 / 8 bytes in 16 / 32 / 64 bit
compilers.
*/

#include<stdio.h>
int main()
{
    int *a;
    float *b;
    char *c;
    printf("%d, %d, %d\n", sizeof(a), sizeof(b), sizeof(c));      //4, 4, 4
    printf("%d, %d, %d", sizeof(*a), sizeof(*b), sizeof(*c));      //4, 4, 1
}