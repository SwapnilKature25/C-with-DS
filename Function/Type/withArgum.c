// Function with arguments, with return values:
#include<stdio.h>
/*
int sum(int , int);
void main()
{
    int a=10, b=20;
    printf("sum=%d",sum(a,b));         //sum=30
}
int sum(int x,int y) 
{
    return x+y; 
}
*/

int evenOdd(int x) 
{
    return x%2; 
}
void main()
{
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    // if(evenOdd(n))   puts("Odd");
    // else    puts("Even");
    puts(evenOdd(n)? "Odd" : "Even");
}

// Enter a no. 13
// Odd