#include<stdio.h>
void main()
{
    // Swapping 2 Numbers without Operator
    // int a=10, b=20;
    // printf("Before swap a=%d, b=%d\n",a,b); // 10, 20
    // printf("Before swap a=%d, b=%d\n",b,a); // 20 , 10


        // Swapping 2 Numbers using 3rd Variable
    int x=10,y=20,temp;
    printf("Before swap x=%d, y=%d\n",x,y); // 10, 20
    temp=x;
    x=y;
    y=temp;
    printf("After swap x=%d, y=%d\n",x,y); // 20, 10


        // Swapping 2 Numbers without using 3rd Variable
    
    int a=10,b=20;
    printf("Before swap a=%d, b=%d\n",a,b); // 10, 20
    // a=a+b; b=a-b; a=a-b;
    // a=a*b; b=a/b; a=a/b;
    a=a^b; b=a^b; a=a^b;
    printf("After swap a=%d, b=%d\n",a,b); // 20, 10

}