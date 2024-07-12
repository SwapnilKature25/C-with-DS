
// Reading multiple strings:

#include<stdio.h>
int main()
{
    char s[5][50];
    int i;
    printf("Enter 5 names\n ");
    for(i=0; i<5; i++)
    {
        gets(s[i]);
    }
    puts("------------------------------");
    for(i=0; i<5; i++)  puts(s[i]);
}

/*
Enter 5 names
 swap 
kature
malegaon
badnapur
jalna
------------------------------
swap 
kature
malegaon
badnapur
jalna
*/