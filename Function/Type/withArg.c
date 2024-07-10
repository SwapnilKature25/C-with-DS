// Function with argument, without return value:

#include<stdio.h>
// void show(int f);       //fun declaration
// void main()     //caller
// {
//     int a=10;
//     show(a);        //fun calling  or callie , a is a actual parameter
// }
// void show(int f)        //fun definition
// {
//     printf("f val = %d ",f);        // f val = 10 
// }




/*
void sum(int x,int y);
void main()
{
    int a=10,b=5;
    sum(a,b);       //callie,  a&b are actual parameters
}
void sum(int b, int p)      // fun definition , b & p are formal parameters
{
    printf("b + p = %d",b+p);       //b + p = 15
}
*/





void sum(int x,int y);
void main()
{
    int a=10;
    // In fun Calling arguments passed from right to left
    sum(a++,a++);       //callie,  a&b are actual parameters
}
void sum(int x, int y)      // fun definition , b & p are formal parameters
{
    printf("x=%d , y=%d",x,y);       //x=11 , y=10
}

// In fun Calling arguments passed from right to left