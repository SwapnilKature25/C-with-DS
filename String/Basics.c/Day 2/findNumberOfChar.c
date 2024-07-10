/*
Finding no of lower, upper, digits, spaces,
special char in given string.

Enter the String James Bond - 007
Lower=7, Upper=2, Digits=3, Space=3, Special=1
*/

#include<stdio.h>
int main()
{
    char s[50];
    int i,l,u,d,spa,spe;
    printf("Enter the String ");
    gets(s);

    for(l=u=d=spa=spe=i=0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i]<='Z')    u++;
        else if(s[i]>='a' && s[i]<='z') l++;
        else if(s[i]>='0' && s[i]<='9') d++;
        else if(s[i]==' ') spa++;
        else spe++;
    }
    printf("Lower=%d, Upper=%d, Digits=%d, Space=%d, Special=%d",l,u,d,spa,spe);
}