/*
Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .
Input as : 
Enter a String : Nareshit @123

Output as :
Vowel count is : 3

Consonant count is : 5
Digit count is : 3
Special Character count is : 1



Enter a String Swapnil8767@mail.com
Vowel count is: 5
Consonant count is : 9
Digits count is : 4
Spaces count is : 0
Special Character count is : 2


*/

#include<stdio.h>
int main()
{
    char s[50],i,v,c,d,sp,spa;
    printf("Enter a String ");
    gets(s);
    v=c=d=sp=spa=0;
    for(i=0; i<s[i]!='\0'; i++)
    {
        if(s[i]>=65&&s[i]<=122)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
            {
                v++;
            }
            else{
                c++;
            }
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else if(s[i]==32)
        {
            spa++;
        }
        else
        {
         sp++;
        }
    }
    printf("Vowel count is: %d\n",v);
    printf("Consonant count is : %d\n",c);
    printf("Digits count is : %d\n",d);
    printf("Spaces count is : %d\n",spa);
    printf("Special Character count is : %d",sp);
}