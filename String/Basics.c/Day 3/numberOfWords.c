/*
Finding no of words in given string:
I am proud to be Indian  6 words
*/
#include<stdio.h>
int main()
{
    char s1[50];
    int i,c;
    printf("Enter first String ");
    gets(s1);
    for(i=0,c=0; s1[i]!='\0'; i++)
    {
        if(s1[i]==' ' && s1[i+1]!=' ')  c++;
    }
    printf("%s -> %d\n",c);
}