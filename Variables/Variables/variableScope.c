/*
// Finding local variable scope
#include<stdio.h>
void show(){
    int a=100;      //local var
    printf("a=%d\n",a);
}
void main(){
    show();     //fun calling
}
// otp : a=100
*/

/*
void showl(){
    int b=100;
    printf("b=%d\n",b);
}
void main(){
    showl();     //fun calling
    printf("b=%d\n",b);
}
// otp : Erro : error: 'b' undeclared (first use in this function)

*/


// Finding Global variable scope
#include<stdio.h>
int a=100;      // Global var
void show(){
    printf("a=%d\n",a);
}
void main(){
    show();     //fun calling
    printf("a=%d\n",a);
}
// otp : a=100
//       a=100