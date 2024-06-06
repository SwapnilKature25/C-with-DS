#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a,b values ");
    scanf("%d%d",&a,&b);

    if(a>b)   puts("a is big");
    else if(b>a)  puts("b is big");
    else puts("Both are equals");

    // Enter a,b values 3 4
    // b is big


    // Finding +ve, -ve and Zero
    int n;
    printf("Enter n values ");
    scanf("%d",&n);

    if(n>0)   puts("+ve");
    else if(n<0)  puts("-ve");
    else puts("Zero");

    /*
    Enter n values 4
    +ve
    */
 }