// Finding biggest in two numbers without using if condition or ternary operator.

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a,b values ");
    scanf("%d %d", &a, &b);
    // a>b && printf("%d is big",a) ||  b>a && printf("%d is Big",b);

    a>b && printf("%d is big",a) ||  b>a && printf("%d is Big",b) ||
    a==b && printf("Both are equal");


}