// Lower to upper / Upper to lower:


#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter the String ");  gets(s);
    for(i=0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z')  s[i]-=32;   //strupr
        else if(s[i]>='A' && s[i]<='Z')  s[i]+=32;   //strlwr
    }
    printf("Converted String is %s",s);

}

/*
Enter the String I Miss You
Converted String is i mISS yOU
*/