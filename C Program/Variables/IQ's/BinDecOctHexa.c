#include<stdio.h>
void main()
{
        printf("%d\n",012);        //Octal to Decimal
        printf("%o\n",45);         // Decimal to Ocatal

        printf("%d\n",0x35);        //Hexa to Deci
        printf("%x\n",45);          // Deci to Hexa
        printf("%X\n",95);          // Deci to Hexa

        printf("%o\n",0x95);          // Hexa to Octal
        printf("%x\n",065);          // Oct to Hexa

        printf("%d\n",-2<<2);         
        printf("%x\n",-2<<2);          // dec to Hexa

    /* op:
    10
    55
    53
    2d
    5F
    225
    35
    -8
    fffffff8 
    */ 

}