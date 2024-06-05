#include<stdio.h>
void main(){ 
    if("false")         // "false" is a non-null string, so this condition is true.
    {
        printf("a");
        printf("b");
    }
        printf("c");    // This line is always executed, regardless of the if condition, so "c" is printed.


    // o/p : abc


    printf("\n");

    // if("false" > "true")       // 'f' in "false" has ASCII value 102, 't' in "true" has ASCII value 116. 
    //                             // Since 102 < 116, this condition is true.
    // {
    //     printf("a");
    //     printf("b");
    // }
    //     printf("c");
    
    // o/p : c

    printf("\n");

    // // if("false" < "true")     
    // {
    //     printf("a");
    //     printf("b");
    // }
    //     printf("c");

    // o/p : abc


    printf("\n");

    // if("a"=="a") 
    // {
    //     printf("a");
    //     printf("b");
    // }
    //     printf("c");
    // // abc



    //  if( printf("") ) {}    // blank screen
    //  if( printf(" ") ) {}   // _abc
    //  if( printf("\0") ) {}   //  blank screen


    //  if( printf("\t") ) {}   //  _ _ _ _ _ _ _ _ abc
    // if( printf("I Love") - printf("Jhanvi") ){}       // I LoveJhanvi
     
    // if( sizeof(1.1) > sizeof(0.0) )   {}    // 8>8 =0  -> blank screen
    if( sizeof("") > printf(" ") )      //  _ space
    {
        printf("a");
        printf("b");
        printf("c");
    }
    //blank screen

    // int a=0,b=1;
    // if(a++) a=10, b=20; printf("a=%d, b=%d, sum=%d\n",a,b,a+b);      // a=1, b=1, sum=2
    // if(a++) a=10; b=20; printf("a=%d, b=%d, sum=%d\n",a,b,a+b);       //a=10, b=20, sum=30
   
    // if(a=1,0) a=10; b=20; printf("a=%d, b=%d, sum=%d\n",a,b,a+b);       //a=1, b=20, sum=21

    unsigned int a=-65500,b=20;
    if(a>0) a=10; b=20; printf("a=%d, b=%d, sum=%d\n",a,b,a+b);       //a=10, b=20, sum=30
    





}