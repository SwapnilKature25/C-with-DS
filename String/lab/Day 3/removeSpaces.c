/*
remove all the Spaces from a given String.

Write a C program to remove all the Spaces from a given String.

Input as : 
Enter a String : Black cat on a mat
Expected output : Blackcatonamat

========================================================================

Enter a String Here he came to play games
Herehecametoplaygames

*/

#include<stdio.h>
int main()
{
    char s[50];
    int i,len;;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++);
    len=i;

    for(i=0; i<len; i++)
    {
        if(s[i]==' ')
        {
            continue;
            len--;
        }
        else printf("%c",s[i]);
    }

}