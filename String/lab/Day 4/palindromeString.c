/*
Palindrome String :
Check the given String is palindrome or not.

Example 1:

Input as : 
Enter a String :  radar

Output as : 
radar is a palindrome string.

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],s2[50],s3[50];
    int i,n,t;
    printf("Enter a String ");
    gets(s);
    strcpy(s2,s);
    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            s[i]=s[j];
        }
    }
    if(strcmp(s2,s)==0) printf("%s is a Palindrome",s);
    else printf("%s is not a Palindrome",s);
}