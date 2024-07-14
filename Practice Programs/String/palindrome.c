#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,n,flag=0;
    printf("Enter a String ");
    scanf("%s",s1);
    for(i=0; s1[i]!='\0'; i++);  
    n=i;

    for(i=0; i<n/2; i++)
    {
         if(s1[i]!=s1[n-i-1])
         {
            flag=1;
         }
    }
    if(flag)    printf("not a Palindromme"); 
    else   printf("Palindromme");
}