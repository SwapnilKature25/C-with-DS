// Scan set / magic characters:

#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter ur name ");
    // until we pressed enter key take input
    // scanf("%[^\n]",s);

    // until we pressed . key take input
    // scanf("%[^.]",s);

    // scanf("%[^@#$]",s);

    // scanf("%[^A-Z]",s);

    scanf("%[A-Z 0-9]",s);
    puts("Ur name is ");    puts(s);
    /*
    Enter ur name JAMES cameroon
    Ur name is
    JAMES
    */

    /*
    Enter ur name naresh#it
    Ur name is
    naresh

    Enter ur name bahu Bali
    Ur name is
    bahu
    */

/*
Enter ur name Swap 
Ur name is
Swap
*/

}