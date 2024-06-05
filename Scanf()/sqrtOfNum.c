#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);
    printf("%d sqrt is %.2f\n",n,sqrt(n));     // Basically sqrt() returs by default float value it will not return any value to int .
    printf("%d sqrt is %.0f\n",n,sqrt(n));     // 8
    printf("%d sqrt is %d\n",n,sqrt(n));     // it will not return any value to int .
    printf("%d sqrt is %d\n",n,(int)sqrt(n));     // If we explicitly typecast then it will return the int value 

    /*
    Enter the Number 64
    64 sqrt is 8.00
    64 sqrt is 8
    64 sqrt is 0
    64 sqrt is 8
    */


}