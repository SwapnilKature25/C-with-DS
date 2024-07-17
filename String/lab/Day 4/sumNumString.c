#include<stdio.h>
int main()
{
    char s[20];
    int i,n,sum=0;
    printf("Enter a String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='48' && s[i]<='57')  sum+=s[i];
    }    
    printf("%d",sum);
}