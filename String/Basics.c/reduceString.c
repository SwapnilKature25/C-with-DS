
#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter the String ");  gets(s);
    // for(i=0; s[i]!='\0'; i++) puts(s+i);
    for(i=0; s[i]!='\0'; i++);
    for(; i>0; i--, s[i]='\0')  puts(s);
}

/*
Enter the String Bharathi
Bharathi
harathi
arathi
rathi
athi
thi
hi
i



Enter the String Aishwarya
Aishwarya
Aishwary
Aishwar
Aishwa
Aishw
Aish
Ais
Ai
A

*/