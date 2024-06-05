#include<stdio.h>
void main()
{
    /*
        Back Slash/ Escape Sequence Character :
        They used to format outputs.
        They participated in program execution but not displayed in output.
        hence they are called escape sequence characters.

        each back slash = 1bit i.e 1 character

        \a      -   alert[beep sound]
        \b      -   Backspace
        \n      -   Next line
        \t      -   tab space
        \r      -   carriage return[ beginnning of line]
        \f      -   form feed
        \v      -   Vertical tab
        \0      -   Null Character
        \\      -   | [ Invalid ]
        \k      -   K [Invalid ]

    */

    printf("\a Kishore \n");    
    printf("Naresh\tIT\n");
    printf("\aHello\n");
    //  Kishore 
    // Naresh	IT
    // Hello

    printf("S\b\vAmeerpet\f\n");
    printf("Sec-500016\rHyd");

    /* S Ameerpet
    Sec-500016
    Hyd  */
}