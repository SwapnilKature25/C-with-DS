#include<stdio.h>
int main()
{
    char s[100], *p=s;
    printf("Enter a String ");
    gets(s);
    for( ; *p; p++);
    printf("Length = %d",p-s);      

}
/*
Enter a String swapnil
Length = 7
*/