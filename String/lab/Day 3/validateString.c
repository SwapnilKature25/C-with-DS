/*
given string contains a capital alphabet, small alphabet, special character and digit.
Write a C program to check the

Input as : 
Enter a String : Nareshit@123

Expected output :
The given String is matching to our cases.

Input as : 
Enter a String : nareshit

*/

#include <stdio.h>
int main() {
    char s[20];
    int i,u,l,d,spe;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A'&&s[i]<='Z') u++;
       else  if(s[i]>='a'&&s[i]<='z')     l++;
       else if(s[i]>='0'&&s[i]<='9')     d++;
        else    spe++;
    }
    if(u>=1 && l>=1 && d>=1 && spe>=1)
    printf("The given String is matching to our cases");
    else printf("The given String is not  matching to our cases");

    return 0;
}

/*
Enter a String Swapnil@25
The given String is matching to our cases
*/