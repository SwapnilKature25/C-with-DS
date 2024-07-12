// Storing of multiple string:

#include<stdio.h>
int main()
{
    char s[5][30]={"Naresh IT","Ameerpet", "Hyd-500016", "Jhanvi Kapoor", "Rashmika"};
    int i;
    puts("NAMES");
    puts("************************************");
    for(i=0; i<5; i++)  puts(s[i]);

    char n[50];
    printf("Enter your name "); scanf("%s",n);
    printf("Ur name is %s",n);

    /*
NAMES
************************************
Naresh IT
Ameerpet
Hyd-500016
Jhanvi Kapoor
Rashmika



Enter your name Swapnil
Ur name is Swapnil

    */
}