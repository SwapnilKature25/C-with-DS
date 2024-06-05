// When Local And Gobal with same name, always priority goes to local.

/*
// Finding initial values of local and global variables
#include<stdio.h>
float a; int b; char c;     // Global Variables
void main()
{
    float x; int y; char z;     //Local Variables
    printf("a=%f, b=%d, c=%c\n",a,b,c);     // a=0.000 , b=0, c=null
    printf("x=%f, y=%d, z=%c\n",x,y,z);    // x=0.00 , y=garbage , z=null
}
*/

/* Finding Lifetime of a local Variable*/

// #include<stdio.h>
// void show(){
//     int a=100;
//     printf("a=%d\n",++a);       
// }
// void main(){
//     show();
//     show();
//     show();
// }
// // otp : a=101
// //       a=101
// //       a=101




/* Finding Lifetime of a Global Variable*/

#include<stdio.h>
int a=100;
void show(){
    printf("a=%d\n",++a);       
}
void main(){
    show();
    show();
    show();
}
// otp : a=101
//       a=102
//       a=103