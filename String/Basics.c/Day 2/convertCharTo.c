/*
Convert lower/upper/digits/spaces/special
with @ / # / $/ * / ^

Enter the String James Bond - 007
Converted thing is : #@@@@*#@@@*^*$$$
*/

#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter the String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i]<='Z')    s[i]='#';
        else if(s[i]>='a' && s[i]<='z') s[i]='@';
        else if(s[i]>='0' && s[i]<='9') s[i]='$';
        else if(s[i]==' ') s[i]='*';
        else s[i]='^';
    }
    printf("Converted thing is : %s",s);
}