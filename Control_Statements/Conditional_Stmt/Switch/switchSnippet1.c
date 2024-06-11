#include<stdio.h>
int main()
{
    switch(0){
        // we can place default stmt anywhere
        default: puts("Hi");
        case 0: puts("Byee"); break;
        // Bye
    }


    switch(1){
        // After default stmt sll the cases are going to print.
        default: puts("Hi");
        case 0: puts("Byee"); break;
        // Hi
        // Byee
    }



    int i=0;
    switch(i++){
        case 0: puts("Byee"); 
        switch(i++){
            case 1: puts("Hello"); 
            default: puts("Challo");
        }

        default: puts("Hi");
    }

    // Byee
    // Hello
    // Challo
    // Hi





    i=0;
    switch(i++){
        case 0: puts("Bye"); break;
        switch(i++){
           case 1: puts("Hello"); 
            default: puts("Challo");
        }

        default: puts("Hi");
    }
    //Bye

    i=0;
    switch(++i){
        case 0: puts("Bye"); break;
        switch(i++){
           case 1: puts("Hello"); 
            default: puts("Challo");
        }
        default: puts("Hi");
    }
    // Hi


    i=0;
    switch(i++){
        case 0: puts("Bye"); 
        switch(++i){
           case 1: puts("Hello"); 
            default: puts("Challo");
        }
        default: puts("Hi");
    }
    //  Bye
    //  Challo
    //  Hi




    i=0;
    switch(i++){
        // case0 is a label now so it will go to default.
        case0 : puts("Bye"); break;
        default: puts("Hi");
    }
    // Hi



    switch(i++){
         puts("Bye"); break;
         puts("Hi");
    }
    // Blank Screen



    i=0;
    switch(i++){
        printf("i=%d",i);
        case 0 : puts("Bye"); break;
        default: puts("Hi");
    }
    //  Bye




    i=0;
    switch(i++,i++){
        case 0 : puts("Bye"); break;
        case 1 : puts("Hello"); break;
        default: puts("Hi");
    }
        printf("i=%d",i);

    // Hello
    // i=2




    i=0;
    // here switch(i=0,1)  => becomes switch(0,1) and case 1 will get print
    switch(i=0,1){
        case 0 : puts("Bye"); break;
        case 1 : puts("Hello"); break;
        default: puts("Hi");
    }
    printf("i=%d",i);
    // Hello    
    // i=0




    i=0;
    switch(i=(0,1)){
        case 0 : puts("Bye"); break;
        case 1 : puts("Hello"); break;
        default: puts("Hi");
    }
    printf("i=%d",i);
    // Hello    
    // i=1



}
