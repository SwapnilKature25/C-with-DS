/*
Creating abbreviation:
NANDHAMURI TARAKA RAMARAO - NTR

Enter a String Swapnil Krishna Kature
S K K 

*/

#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter a String ");
    gets(s);
    if(s[0]!=' ')   printf("%c.",s[0]);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        printf("%c.",s[i+1]);
        else printf("\b ");
    }
}