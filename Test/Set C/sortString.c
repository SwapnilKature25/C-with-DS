/*
Enter a String Apple
Aelpp
*/

#include<stdio.h>
int main()
{
    char s[50],t;
    int i,n;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    n=i;
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    printf("%s",s);


}