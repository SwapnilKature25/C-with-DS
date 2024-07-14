#include<stdio.h>
int main()
{
    char s[100],i,n;
    printf("Enter a String : ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    n=i;
    printf("The reverse of the String is : ");
    for(i=n-1; i>=0; i--)
    {
        printf("%c",s[i]);
    }
}