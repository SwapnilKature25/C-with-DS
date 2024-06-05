// When Local And Gobal with same name, always priority goes to local.

// #include<stdio.h>
// int a=100;
// void main(){
//     int a=200;      //Priority to local > global
//     printf("a=%d\n",a);
// }
// otp : a=200
// In C++ we use Scope resolution operator (::) to access global variables





/*
#include<stdio.h>
int a=100;      //Global var
void main(){
    int a=200;          // local vaar
    printf("a=%d\t",a);     //a=200

    {
        int a=300;          
        printf("a=%d\t",a);   //a=300
    }

    printf("a=%d\t",a);     //a=200
}
// otp : 200    300     200

*/



/*
#include<stdio.h>
int a=100;      //Global var
void main(){
    int a=200;          // local vaar
    printf("a=%d\t",a);     //a=200

    {
        a=300;          //local change from 200 to 300 
        printf("a=%d\t",a);   //a=300
    }

    printf("a=%d\t",a);     //a=300
}
// otp : 200    300     300
*/




#include<stdio.h>
int a=100;      //Global var
void main(){

    printf("a=%d\t",a);     //a=100

    {
        int a=300;          //local var 
        printf("a=%d\t",a);   //a=300
    }

    printf("a=%d\t",a);     //a=100
}
// otp : 100    300     100