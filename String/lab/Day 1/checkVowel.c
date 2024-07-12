/*
Write a C program to check is the String contains any vowel or not.

Input as : 
Enter a String : Apple

Output as : 
This String contains vowel.

Input as : 
Enter a String : Rhythm

Output as : 
There is no vowel present in this String.


o/p : 

Enter a String Rythm
There is no vowel present in this String.

Enter a String Apple
This String contains Vowels
*/
#include<stdio.h>
int main()
{
    char s[50],i,v=0;
    printf("Enter a String ");
    gets(s);
    for(i=0; i<s[i]!='\0'; i++)
    {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
            {
                v++;
            }
    }
    
    if(v>0) printf("This String contains Vowels");
    else  printf("There is no vowel present in this String.");
}