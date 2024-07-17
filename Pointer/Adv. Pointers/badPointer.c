/*
Bad / wild pointer: A pointer is declared but not
initialized. In this situation the pointer is storing some
unknown address and value. This kind of pointer is called
bad / wild pointer.
*/
#include<stdio.h>
int main()
{
    int *p;
    printf("p stored addr is %u, value is %d",p, *p);
}

// p stored addr is 3477504, value is 0
