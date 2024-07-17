/*
void / generic pointer: pointer can store only the same
type of variable address. Void pointer can store any
type of address. But before going to use void pointer,
explicit type casting should be provided. It takes 2 bytes
memory and used to handle dynamic memory.
*/

#include<stdio.h>
int main()
{
    int a=10; float b=1.2;  char c='X';
    // It takes 2 bytes memory and used to handle dynamic memory.
    void  *p;
    p=&a;
    printf("a=%d\n",*(int *)p);     //explicit type casting
    p=&b;
    printf("a=%f\n",*(float *)p);     
    p=&c;
    printf("a=%c\n",*(char *)p);  

    printf("void ptr size=%d",sizeof(p));

}

/*
a=10
a=1.200000
a=X
void ptr size=4
*/