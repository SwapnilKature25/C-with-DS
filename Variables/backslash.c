#include<stdio.h>
void main()
{
    // Program to print backslash characters

    printf("Naresh\\tIT\\nHyd\n");        //Naresh\tIT\nHyd   -   first \ will remove

    printf("Naresh\\\tIT\\\nHyd");
    // Naresh\	IT\
    // Hyd
    
    printf("12%c 34%c 56", 9, 10);      
    //12    34
    // 56

    // print kishore with "Kishore"
    printf("\"Kishore\"");
    // "Kishore"

    // print whole kishore with print()
    printf("printf(\"Kishore\");");
    // printf("Kishore");

    printf("%cKishore%c",34,34);
    // "Kishore"

    ///////////////////////////////////////////////////////////////////////////////////////////

    printf("\nBharathi addr is %u\n", "Bharathi");    //4214970
    printf("Bharathi "+1);      //harathi
    printf(1+"Bharathi\n"+1);   //arathi
    printf("Bharathi\n"-1);      //empty
    printf("Krish%cRadha",3);   //KrishRadha
    printf("%c + %c = %c",1,2,3);   //smile + smile = love symbols

    // printf("\nd\n"+1.999);  //error: invalid operands to binary + (have 'char *' and 'double')

    





}