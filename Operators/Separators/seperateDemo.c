// It incudes Sizeof() , () and Separators

#include<stdio.h>
void main()
{
    // int a=1,2,3;    //Error : Declaration syntax error
    // printf("%d",a);

    // If () is use to specify multiple  numbers then it will print the last digit of the ().

    // int a=(1,2,3);      // 3  => We have to go from left to right 
    // printf("%d",a);

    // int a;      // 1  => ( = ) has more prioprity than , separator
    // a=1,2,3;    // it has like a=1,(2),3  then the () has single character so it does not affect the o/p. i.e same from left to right. //1
    // printf("%d",a); 

    //  int a;      
    // a=(1,2),(3,4);      //2,4 = 2
    // printf("%d",a); 

    //  int a;      
    // a=((1,2),(3,4),5),6;      //2,4,5 = 5 => 5, 6 => 5
    // printf("%d",a); 

    //  int a;      
    // a=printf("Good "), printf("Morning");     //Good Morning5
    // printf("%d",a); 

     int a;      
    a=printf("%d",printf("Good Morning"));     //Good Morning12
    printf("%d",a); 

}