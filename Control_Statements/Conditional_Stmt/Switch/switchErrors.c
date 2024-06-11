#include<stdio.h>
int main()
{
    switch(1);      //blank screen
    switch(1) printf("Hii");        //blank screen

    // switch(1)       //error: expected expression before '}' token
    // switch();       // error: expected expression before ')' token   - there should be condition in ()
    // default :   printf("Hii");      // error: 'default' label not within a switch statement  
   
    // case 1: printf("hii");          // error: case label not within a switch statement

    case1: printf("hii");       //it will print hii cause case1 assigned as label here


    switch(0)
    default: puts("Hi");
    // case 0: puts("Bye");  break;
    // error: case label not within a switch statement
    // error: break statement not within loop or switch
}