/*
Finding palindrome or not using single string:

*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[50];
    int i,j;
    printf("Enter the String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        for(j=0; j<i/2; j++)
        {
            if(tolower(s[j])!=tolower(s[i-j-1]))
            {
                puts("Not a Palindrome");
                return 0;
            }
        printf("Palindrome");
        }
    }

}