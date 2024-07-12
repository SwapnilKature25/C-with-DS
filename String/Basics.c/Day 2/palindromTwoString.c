/*
Enter the String Racecar
Palindrome
*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s1[100],s2[100];
    int i,j;
    printf("Enter the String ");
    gets(s1);

    for(i=0; s1[i]!='\0'; i++);     //len

    for(j=0, s2[i--]='\0'; i>=0; i--,j++)       
    {
        s2[j]=s1[i];    //str rev + copy
    }

    for(i=0; s1[i]!='\0'; i++)
    {
        if(tolower(s1[i])!=tolower(s2[i]))
        {
            puts("Not a Palindrome");
            return 0;
        }
    }
    printf("Palindrome");

}