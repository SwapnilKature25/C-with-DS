#include<stdio.h>
int main()
{
    char s[50],c;
    int i,n;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        if(s[i]==' ')
        {
            continue;
            n--;
        }   
        else printf("%c",s[i]);
    }
}