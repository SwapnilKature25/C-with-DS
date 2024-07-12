/*
Finding string length and reverse string,
without using predefined functions:
*/

#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter the String ");  gets(s);
    
    // for(i=0; s[i]!='\0'; i++)
    // {

    // }
    // printf("len=%d\n",i);
    // printf("Reverse ");
    // while(i)    printf("%c",s[--i]);


    for(i=0; s[i]!='\0'; i++);
    printf("len=%d\n",i);
    printf("Reverse ");
    while(i)    putchar(s[--i]);

/*
Enter the String Umar
len=4
Reverse ramU


Enter the String Aisha
len=5
Reverse ahsiA

*/
}