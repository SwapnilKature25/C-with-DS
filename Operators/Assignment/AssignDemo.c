#include<stdio.h>
#include<String.h>
void main()
{
    int a;
    float b;
    char c;
    a=10;
    b=1.2;
    c='x';
    // 10+20=30;            Erro : Because constants are fixed and they are not allowed inn left side.
    char name[20];
    // name="Swapnil";      Because we can't assign string value using = operator instead use strcpy()
    strcpy(name,"Swapnil");
    printf("a=%d\n b=%f\n c=%c\n name=%s",a,b,c,name);


}