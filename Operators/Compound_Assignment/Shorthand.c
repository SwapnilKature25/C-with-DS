#include<stdio.h>
void main()
{
    // +=, -=, *=, /=, %=, ~=, <<=, >>=,....

    int a=10,b=25,c;
    a+=b+5;
    printf("%d\n", a);    //40
    a=10.2,b=25.5 ,c=50.2;
    c+=b*=c-=7;
    printf("%d, %d, %d\n", a,b,c);    //10, 1075, 1118

}