#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int i,n;
    printf("Enter a String ");
    scanf("%s",s1);
    strcpy(s2,s1);
    for(i=0; s2[i]!='\0'; i++);
    n=i;
    int flag=0;
    for(i=0;i<=n/2;i++)
    {
        if(s1[i]!=s1[n-1-i]){
            flag=1;
            break;
        }
    }
    if(flag)
    printf("String is ! Palindrome");
    else
    printf("String is Palindrome");
    
}