#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')  ch+=32;
    if(ch>='a' && ch<='z'){
        // switch(ch){
        //     case 'a': case 'e': case 'i': case 'o':  case 'u':
        //         puts("Vowel");
        //         break;

        //     default:
        //         puts("Consonant");
        // }
         switch(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u'){
            case 1:
                puts("Vowel");
                break;
            default:
                puts("Consonant");
        }
    }
    else if(ch>='0' && ch<='9') puts("Digit");
    else    puts("Special Char");

    // Enter a Character A
    // Vowel


    // Enter a Character 5
    // Digit
}