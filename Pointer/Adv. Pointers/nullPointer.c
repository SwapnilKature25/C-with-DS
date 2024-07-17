/*
NULL pointer: When a pointer initialized with 0 or NULL
then it is called null pointer. To avoid bad and dangling
pointers we are using null pointer.
*/
#include<stdio.h>
int main()
{
    // int *p=NULL;
    int *p=0;
    printf("p stored addr is %u, value is %d",p, *p);       //blank

}