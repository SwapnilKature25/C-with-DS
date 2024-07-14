
#include<stdio.h>
int main()
{
    char s[50],s2[100],s3[40];
    int i,j,t,k;
    printf("Enter first String ");
    gets(s);
    printf("Enter Second String ");
    gets(s2);
    printf("Resulting string is ");
    for(i=0; s[i]!='\0'; i++,k++)
    {
        s3[k]=s[i];
    }
    for(i=0; s2[i]!='\0'; i++,k++)
    {
        s3[k]=s2[i];
    }
    s3[k]='\0';
    printf("%s",s3);
}