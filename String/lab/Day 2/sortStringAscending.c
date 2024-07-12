/*
String in Ascending :
Write a c program to sort the String in ascending order ,after sorting print the result in string
format? 
Input as :- "CoreJava"

output as:-

Before sorting the array
CoreJava

After sorting the array
CJaaeorv



Enter a String virat
airtv
*/

#include<stdio.h>
int main()
{
    char s[100],t;
    int i;
    printf("Enter a String ");
    gets(s);//irvat

    for(i=0; s[i]!='\0'; i++)
    {
        for(int j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>=s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
      
    }
      printf("%s",s);
}