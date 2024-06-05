#include<stdio.h>
void main()
{
    // If condition is true  then  result  is 1
    // If condition is false then result is 0

    printf("%d\n", 100==100);
    printf("%d\n", 1.1==1.1);
    printf("%d\n", 1.0==1);
    printf("%d\n", 'a'=='A');
    printf("%d\n", 'a'=='a');
    printf("%d\n", "a"=="a");
    printf("%d\n", 'a'>'A');
    printf("%d\n", 'a'<'A'+32);
    printf("%d\n", 5!=3);
    printf("%d\n", 0!='0');     //0!=48

    printf("--------------------------------------------------------------------------------");

    printf("%d\n", 5+3/2==4);
    printf("%d\n", (5+3)/2==4);
    printf("%d\n", 5-3/2==4);
    printf("%d\n", 5*3/2==7);

    printf("--------------------------------------------------------------------------------");
    
    printf("%d\n", 5/3*2==2);
    printf("%d\n", 5%3/2==1);
    printf("%d\n", 2+3*4+5==19);
    printf("%d\n", 2+3*4+5==25);
    printf("%d\n", 2+3*4+5==45);
    printf("%d\n", (2+3)*(4+5)==45);

    
}