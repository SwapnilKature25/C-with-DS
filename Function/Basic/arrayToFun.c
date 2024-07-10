// We can pass string / array actual parameter with or without address.

#include<stdio.h>
#include<string.h>
void reverse(char st[2])       //or st[] or *st
{
    strrev(st);
}
void main()
{
    char s[10]="abcd";
    reverse(s);     // or reverse(&s)
    printf("String = %s",s);    //String = dcba

}