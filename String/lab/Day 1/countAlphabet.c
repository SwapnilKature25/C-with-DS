/*
Write a C program to count the number of alphabet present in a given String .
Input as : Apple
ccc
Enter the String String
6
*/

#include<stdio.h>
int main()
{
    char s[50],i;
    printf("Enter the String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++); 
    printf("%d",i);
}