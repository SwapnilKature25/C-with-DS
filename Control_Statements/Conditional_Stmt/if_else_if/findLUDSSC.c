#include<stdio.h>
void main(){

    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    // if(ch>='a' && ch<='z')  puts("Lower Case Character");
    // else  if(ch>='A' && ch<='Z')    puts("Upper Case Character");
    // else  if(ch>='0' && ch<='9')    puts("Digits");
    // else  if(ch==' ')    puts("Space");
    // else puts("Special Character");
    

    /*
    Enter the character :  
    Space

    Enter the character : ,
    Special Character

    */


    // Using Ascii Values..

    if(ch>=97 && ch<=98)  puts("Lower Case Character");
    else  if(ch>=65 && ch<=90)    puts("Upper Case Character");
    else  if(ch>=48 && ch<=57)    puts("Digits");
    else  if(ch==32)    puts("Space");
    else puts("Special Character");
    
    /*
    
    Enter the character : 10
    Digits

    Enter the character : A
    Upper Case Character
    
    */
}
