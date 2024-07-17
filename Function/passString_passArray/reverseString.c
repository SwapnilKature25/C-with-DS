#include<stdio.h>
#include<string.h>
// void reverse(char st[10])
void reverse(char *st)
{
    strrev(st);
}
int main()
{
    char s[10]="abcd";
    // reverse(s);
    reverse(&s);
    printf("Reverse String = %s",s);        //dcba  //dcba
}