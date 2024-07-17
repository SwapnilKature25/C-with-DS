/*
C Program to Display All Characters Present in the Prime Position of a String.
Test Data :

Input a string : today is wednesday
Output as : da sdey

*/
#include<stdio.h>
int main()
{
    char s[30];
    int i,n,j,c;
    printf("Enter a String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        for(c=0,j=i;j>0;j--)
        {
            if(i%j==0)c++;
        }
       if(c==2) printf("%c",s[i]);
    }

}