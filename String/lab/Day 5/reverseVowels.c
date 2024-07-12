/*
Reverse All the Vowels  : 
Write a C program to reverse all the vowels present in a given string. Return the newly created string
or modified string .

Test Data :
Input a string: Aeroplane
Output as : earoplenA

*/
#include<stdio.h>
#include<string.h>
int isVowel(char ch)
{
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
    {
        return 1;
    }
    else return 0;
}
void main()
{
    char s[100], v[100];
    int l,index,i;
    printf("Enter a String ");
    gets(s);
    l=strlen(s);
    index=0;
    for(i=l-1; i>=0; i--)
    {
        if(isVowel(s[i]))
        {
            v[index++]=s[i];
        }
    }
    index=0;
    for(i=0; i<l; i++)
    {
        if(isVowel(s[i]))
        {
            s[i]=v[index++];
        }
    }
    printf("%s",s);
}


/*
Enter a String Aeroplane 
earoplenA
*/