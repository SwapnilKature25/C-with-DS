#include<stdio.h>
void main()
{
    // if( "xy" )
    // printf("a");
    // printf("b");
    // else            // error: 'else' without a previous 'if'
    // printf("c");
    // printf("d");


    if( "xy" )
    {
    printf("a");
    printf("b");
    }
    else            
    printf("c");
    printf("d");

    // o/p : abd

    printf("\n-----------------------------\n");

    if( "xy" )
    {
    printf("a");
    printf("b");
    }
    else       
    {     
    printf("c");
    }
    printf("d");

    // o/p : abd




     printf("\n-----------------------------\n");

    if( "xy" )
    {
    printf("a");
    printf("b");
    }
    else       
    {     
    printf("c");
    printf("d");
    }

    // o/p : ab




    printf("\n-----------------------------\n");

    // if( "xy" );          //we can't just terminate the if block without else part
    // {
    // printf("a");
    // printf("b");
    // }
    // else            // error: 'else' without a previous 'if'
    // {     
    // printf("c");
    // printf("d");
    // }

    // o/p : Error 




    printf("\n-----------------------------\n");

    if( "xy" )
    {
    printf("a");
    printf("b");
    }
    else  ;         //else part will terminate here and below stmts will also be executed   
    {     
    printf("c");
    printf("d");
    }

    // o/p : abcd





    printf("\n-----------------------------\n");

    // else  ;         // we cant use else without if block
    // else          // we cant use else without if block
    // {
    // printf("c");
    // printf("d");
    // }
    // Error : 






    

}