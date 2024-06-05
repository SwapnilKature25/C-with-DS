#include<stdio.h>
void main()
{  
    /*
    int a,b;
    printf("Enter a value ");
    scanf("%d",&a);
    printf("Enter b value ");
    scanf("%d",&b);
    printf("a=%d, b=%d", a,b);  */
    // op : Enter a value 4 8
    //      Enter b value a=4, b=8

    // op : Enter a value 3 4 5
    //      Enter b value a=3, b=4


    int a,b;
    printf("Enter a value ");
    scanf("%d",&a);
    // In turboc we have flushall(); to do the below work
    fflush(stdin);              // it will not print the extra values to b which is given to a.
    printf("Enter b value ");
    scanf("%d",&b);
    printf("a=%d, b=%d", a,b);

    // Enter a value 1 2
    // Enter b value 9
    // a=1, b=9
}