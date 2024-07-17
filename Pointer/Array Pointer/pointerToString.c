#include<stdio.h>
int main()
{
    char s[100], *p=s;
    printf("Enter a String ");
    gets(s);
    for( ; *p; p++) puts(p);
}

/*
Enter a String swap
swap
wap
ap
p
*/