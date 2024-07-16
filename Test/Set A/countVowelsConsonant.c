#include<stdio.h>
int main()
{
    char str[10];
    int v,c,n,i;
    printf("enter a string ");
    gets(str);

    for( i=0; str[i]!='\0'; i++);
    n=i;
    for( i=0; i<n; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            v++;
        }
        else c++;
    }
    printf("Vowel count is : %d, Consonant count is : %d",v,c);
}