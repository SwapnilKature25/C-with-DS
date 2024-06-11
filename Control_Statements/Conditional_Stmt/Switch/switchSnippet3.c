#include<stdio.h>
int main()
{
    int a=0,b=1;

    switch(a,b){
        // case a: puts("Var a"); break;
        // expression must have a constant value
        // case b: puts("Var a"); break;
        default: puts("Inv"); break;
    }
    // error : expression must have a constant value



    a=0,b=1;
    // switch(a,98){        //Var b
    switch(a,b){
        case 'a': puts("Var a"); break;
        case 'b': puts("Var b"); break;
        default: puts("Inv"); break;
    }
    // Inv



    switch(a,b){
        // case "a": puts("Var a"); break;
        // case "b": puts("Var b"); break;
        default: puts("Inv"); break;
    }
    // expression must be an integral constant expression



    a=97, b=98;
    switch(a,b){
        case 'a': puts("Var a"); break;
        case 'b': puts("Var b"); break;
        default: puts("Inv"); break;
    }
    // Var b


    a='a';
    switch(a){
        case 97: puts("Var a"); break;
        case 'b': puts("Var b"); break;
        default: puts("Inv"); break;
    }
    // Var a




    a='a';
    switch(a){
        case 97: puts("Var a"); break;
        // case 'a': puts("Var b"); break;
        default: puts("Inv"); break;
    }   
    // error : Duplicate case in fun main
}