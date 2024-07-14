/*
Enter a String swap
Enter the character you want to remove w
sap
*/
#include<stdio.h>
int main()
{
    char s[50],c;
    int i,n;
    printf("Enter a String ");
    gets(s);
    printf("Enter the character you want to remove ");
    scanf(" %c",&c);
    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        if(s[i]==c){
            continue;
            n--;
        }
        else 
        printf("%c",s[i]);
    }
}