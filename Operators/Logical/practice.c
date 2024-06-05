#include<stdio.h>
void main()
{
    int a,b,c,d;
    a=b=c=2;
    d=a++>=2 && ++b!=c++;   //a=3, b=3 , c=3
    printf("%d, %d, %d, %d\n", a,b,c,d);        // 3, 3, 3, 1

    a=b=c=2;
    d=a++>=b++ || ++b!=c++;     //a=3, b=3
    printf("%d, %d, %d, %d\n", a,b,c,d);        // 3, 3, 2, 1


    a=b=c=2;
    d=a++!=b++ || ++b!=c++;     //a=3, b=3, b=4, c=3
    printf("%d, %d, %d, %d\n", a,b,c,d);    // 3, 4, 3, 1

    a=0, b=0;
    b=a++ && printf("Hi\n");        // 0
    printf("%d, %d\n",a,b);           // 1 , 0

    a=2;
    a=a++ + ++a;
    printf("%d\n",a);   //6
    a=2;
     printf("%d\n",a++ + ++a);  //6

    
    a=2;
    printf("%d, %d\n",a++ + ++a, ++a + a++);       // mine ans =>10 , 6   but came  10, 7  ?
    printf("%d\n",a); 


    // a=2;
    // ++a=a++;        //Error : lvalue required in function main
    // printf("%d\n",a);


    a=0;
    a="Kishore" + 1;
    printf("%d\n",a);   //garbage value




}