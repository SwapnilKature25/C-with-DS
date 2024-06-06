#include<stdio.h>
#include<ctype.h>       //warning solved after using ctype.h file =>  warning: implicit declaration of function 'isspace' [-Wimplicit-function-declaration]
void main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    // if(islower(ch))  puts("Lower Case");
    // else if(isupper(ch))  puts("Upper Case");
    // else if(isdigit(ch))    puts("Digits");
    // else if(isspace(ch))    puts("Space");
    // else puts("Special");

    /*
    Enter the character :  
    Space
    
    */


//  Lower to Upper and Upper to Lower using predefined Functions
    // ch=getchar();   //used instead of scanf() and used to get character
    // if(islower(ch))  ch=toupper(ch);
    // else ch=tolower(ch);

    // printf("char = %c",ch);

    /*
    Enter the character : a
    char = A

    Enter the character : A
    char = a
    */



    //  Lower to Upper and Upper to Lower without using predefined Functions

    if(ch>='a' && ch<='z')  ch=ch-32;       //ch=97(a)  97-32=65(A)
    else if(ch>='A' && ch<='Z') ch=ch+32;   //ch=65(A)  65+32=97(a)
    
    printf("Char : %c", ch);

    /*
        Enter the character : A
        Char : a

        Enter the character : f
        Char : F

        Enter the character : 9
        Char : 9

    */
}