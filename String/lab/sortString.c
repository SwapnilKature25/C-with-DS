/*
Write a C program to sort the string data and print it.
Input as : 
Enter a String : apple
Output as : aelpp


Enter a String Goku 
Gkou

*/


#include<stdio.h>
int main()
{   
    char s[50],i,j,t,len;
    printf("Enter a String ");
    gets(s);
    for(i=0; i<s[i]!='\0'; i++);
    len=i;
    
    for(i=0; i<s[i]!='\0'; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    
    for(i=0; i<s[i]!='\0'; i++)
    {
        printf("%c",s[i]);
    }


}