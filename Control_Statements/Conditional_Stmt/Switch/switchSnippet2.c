#include<stdio.h>
int main()
{
    switch(10||20){
        case 10: puts("Bye"); break;
        case 2: puts("Hello"); break;
        default: puts("Hi");
    }
        // Hi  -> because in switch condition of 10||20 gives 1 in in program case 1 not so it print default.



    switch(10||20){
        case 10||20: puts("Bye"); break;
        // case 20||10: puts("Hello"); break;
        default: puts("Hi");
        // both case gives 1 so there is no duplicate case are not allowed.
    }
    // error: duplicate case value



    switch(10||20){
        // case >0: puts("Bye"); break;
        // case <0: puts("Hello"); break;
        default: puts("Hi");
        // operators not allowed directly after the cases.
    }
    // error: expected expression before '>' token




    switch(1){
        case 1>0: puts("Bye"); break;
        case 0>1: puts("Hello"); break;
        default: puts("Hi");
    }
    // Hi




    // switch(-3){      if -3 then Hi
    switch(3){
        case 1-4: puts("Bye"); break;
        case 5-2: puts("Hello"); break;
        default: puts("Hi");

    }
    // Hello





    switch(1){
        case 5%2: puts("Bye"); break;
        case 5/2: puts("Hello"); break;
        // case 5/5: puts("Hello"); break;      //error: duplicate case value
        default: puts("Hi");
    }
    // Bye





    int i=0;
    abc:
    switch(i++){
        case 1: puts("Bye"); break;
        case 2: puts("Hello"); break;
        default: puts("Hi");
    }
    if(i<=2) goto abc;
    printf("%d",i);
    //Hi
    // Bye
    // Hello  i=3




    i=0;
    switch(i++ || i++ || i++){
        // i++ => 1 , i++ => 2
        case 1: puts("Bye"); break;
        case 2: puts("Hello"); break;
        default: puts("Hi");
    }
    printf("%d",i);
    // Bye 2






    i=0;
    switch(i=printf("I\t"), printf("Am\t")){
        // printf("I\t") =>2  ,  printf("Am\t") => 3     (2,3) => 3
        case 1: puts("Indian"); break;
        case 2: puts("Bharatvasi"); break;
        case 3: puts("Hindustani"); break;
        default: puts("Human Being");
    }
    printf("i=%d",i);
    // I AM Hindustani i=2



    i=0;
    switch(i=*("I Like""CD"+6)){
        case 65: puts("Rashmika"); break;
        case 66: puts("Jhanvi Kapoor"); break;
        case 67: puts("Shradha Kapoor"); break;
        default: puts("All");
    }
    printf("i=%d",i);
    // Rashmika i=65







    i=0;
    switch(i=*("I Like""CD"+6)){
        case 65: puts("Rashmika"); break;
        case 66: puts("Jhanvi Kapoor"); break;
        case 67: puts("Shradha Kapoor"); break;
        default: puts("All");
    }
    printf("i=%d",i);
    // Shradha Kapoor  i=67


}

    // switch(1.1){
    //     case 1.1: puts("Rashmika"); break;
        // default: puts("All");
    // }
    // switch does not follows float val
