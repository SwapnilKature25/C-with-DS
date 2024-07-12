/*
Create a program that compresses a string by replacing repeated characters with a count of the repetition (e.g., "aaabbbcc" becomes "a3b3c2").
Input as : 
Enter a String : aaabbccdae

Output as : 
Resulting string is : a4b2c2

*/

#include<stdio.h>
int main()
{
    char s[50];
    int i,j,count,n,t;
    printf("Enter a String ");
    gets(s);

    for(i=0; s[i]!='\0'; i++);
    n=i;

    for(i=0; i<n; i++)
    {
        count=0;
        int c=0;
        for(j=0; j<n; j++)
        {
            if(s[i]==s[j]){  
               count++;
            }
        }
        // use to stop double printing of character
        for(int k=i; k>=0; k--){
            if(s[i]==s[k]){  
               c++;
            }
        }
        if(c==1) printf("%c%d",s[i],count); 
    }
    
}