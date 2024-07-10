/*
3).Write a c program to print all the frequency of character present
For Example:-
String s=" Hello Everyone"

Output as :-
The frequency of H is 1
The frequency of e is 3
The frequency of l is 2
The frequency of o is 2
The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 
The frequency of E is 1
The frequency of v is 1
The frequency of r is 1
The frequency of y is 1
The frequency of n is 1

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,j,len,c,c1;
    printf("Enter a String ");
    scanf("%s",s1);

    for(i=0; s1[i]!='\0'; i++);
    len=i;

    for(i=0; i<len; i++)
    {
        c=0, c1=1;
        for(j=0; j<len; j++)
        {
            if(s1[i]==s1[j] ){      
                c++;        
            }
        }
        for(j=i+1; j<=len-2; j++)
        {
            if(s1[i]==s1[j] ){
                c1++;
            }
        }
        if(c1==1)
        printf("\nThe Frequency of %c is %d \n ",s1[i],c);
    }
    
}