#include<stdio.h>
void main()
{
    // int a=10, cube=a*a*a;
    // printf("%d cube is %d",a,cube);     //1000


    // int a=10;
    // printf("%d cube is %d",a,(a*a*a));      //1000


    int a=100;
    printf("%d cube is %ld",a,(long)a*a*a);      //1000000
    


    // int a=10;
    // long int cube=a*a*a;
    // printf("%d cube is %ld",a,cube);         //1000


    //  int a=100;
    // long int cube=(long)a*a*a;      //Explicit type casting
    // printf("%d cube is %ld",a,cube);        //1000000


    // long int a=100,cube=a*a*a;      //Explicit type casting
    // printf("%ld cube is %ld",a,cube);        //1000000


    //  long int a=100;      //Explicit type casting
    // printf("%ld cube is %ld",a,cube);  
}