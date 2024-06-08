/*

Write a  c Program to find the biggest number among 3 numbers without using loops and control flow statement

*/


#include<stdio.h>
void main(){

    int a,b,c;
    printf("Enter Numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    (a==b) && (b==c) && printf("All are equals");
    (a>b) && (a>c) && printf("A is Big");
    (b>a) && (b>c) && printf("b is Big");
    (c>b) && (c>a) && printf("c is Big");

}