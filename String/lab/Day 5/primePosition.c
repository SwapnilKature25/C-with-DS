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
    int i;
    printf("Enter a String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]%i==1);
    }

}