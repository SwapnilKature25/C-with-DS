#include<stdio.h>
int main()
{
    char s[100],i,count=0;
    printf("Enter a String : ");
    gets(s);
    for(i=0; s[i]!='\0'; i++) count++;
    // count=i;
    printf("The count of alphabet is : %d",count);
}