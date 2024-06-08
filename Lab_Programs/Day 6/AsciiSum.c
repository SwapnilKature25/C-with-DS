/*
Write a C program to take two character input from the user and print the ASCII value of that two character and display its sum.

Input as :
Enter a character: a b

Expected output :
ASCII value of a is : 97
ASCII value of b is : 98
ASCII sum of a & b is : 195

*/

#include<stdio.h>
void main(){
    char a,b;
    printf("Enter the Characters : ");
    scanf(" %c %c",&a, &b);
    printf("Ascii Value of a is : %d\n",a);
    printf("Ascii Value of b is : %d\n",b);
    printf("Ascii sum of a & b is : %d\n",a+b);

    /*
    Enter the Characters : a b
    Ascii Value of a is : 97
    Ascii Value of b is : 98
    Ascii sum of a & b is : 195
    */
}
