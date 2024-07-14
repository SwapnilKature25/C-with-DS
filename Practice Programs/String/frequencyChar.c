#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int i,c,n,c1;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        c=0,c1=1;
        for(int j=0; i<n; j++)
        {
            if(s[i]==s[j])   c++;
        }
        for(int j=i+1; j<n-1; j++)
        {
            if(s[i]==s[j])   c1++;
        }
        if(c1==1)
        printf("The frequency of %c is %d\n",s[i],c);
    }
}