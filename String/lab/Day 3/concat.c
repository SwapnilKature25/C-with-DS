
/*
Concat two String : 
Write a C program to combine two string in a single String.

Input as :

Enter first String : Naresh
Enter Second String : it
Expected output :
Resulting String is : Nareshit


Enter first String swap
Enter second String nil
Resulting string is swapnil
*/

#include<stdio.h>
int main()
{
    char s1[30],s2[30],s3[30];
    int i,j;
    printf("Enter first String ");
    gets(s1);
    printf("Enter second String ");
    gets(s2);
    for(i=0; s1[i]!='\0'; i++,j++)
    {
        s3[j]=s1[i];
    }

    for(i=0; s2[i]!='\0'; i++,j++)
    {
        s3[j]=s2[i];
    }

    s3[j]='\0';
    printf("Resulting string is %s",s3);

    
}