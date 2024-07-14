#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,n;
    printf("Enter a String ");
    scanf("%s",s1);
    for(i=0; s1[i]!='\0'; i++);
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