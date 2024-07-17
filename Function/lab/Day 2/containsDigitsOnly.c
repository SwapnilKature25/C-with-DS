/*
1234
The string contains only digits

2e2e
The string contains non-digit characters.
*/
#include<stdio.h>
int digits(char s[10])
{
    int i,n,flag=0;
    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        if(s[i]>='0' && s[i]<='9')    
         flag++;
        else
        flag=0;
    }
    if(flag>=1) return 1;
    else return 0;
}
int main()
{
    char s[100];
    printf("Enter a number ");
    scanf("%s",s);

    if(digits(s))    printf("The string contains only digits");
     else printf("The string contains non-digit characters.");
}