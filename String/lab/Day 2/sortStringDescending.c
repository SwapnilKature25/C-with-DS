/*
Descending Order
Write a c program to sort the String in Descending Order  ,after sorting print the result in string
format?  

Input as :- "CoreJava"

Before sorting the array
CoreJava

After sorting the array
vroeaaJC



Enter a String swapnil
wspnlia
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
            if(s[i]<=s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        } 
    }
      printf("%s",s);
}