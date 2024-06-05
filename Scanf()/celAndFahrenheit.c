// Celsius to Fahrenheit        => f=c*1.8 + 32;
//  we have  degree ascii value - 248
#include<stdio.h>
void main(){
    // float c,f;
    // printf("Enter the Temperature in Celsius : ");
    // scanf("%f",&c);
    // f=c * 1.8 + 32;
    // // printf("\n%.1f Celsius is %.1f Fahrenheit",c,f);
    // printf("%.1f%c Celsius is %.1f%c Fahrenheit",c,248,f,248);

    /*
    o/p : 
    Enter the Temperature in Celsius : 36.9
    36.9 Celsius is 98.4 Fahrenheit

    Enter the Temperature in Celsius : 36.9
    36.9° Celsius is 98.4° Fahrenheit
    
    */



    // Fahrenheit to Celsius      => c=(f-32)* 5/9;
    float c,f;
    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%f",&f);
    c=(f-32)* 5/9;
    printf("%.1f%c Fahrenheit is %.1f%c Celsius",f,248,c,248);

    /*
    Enter the Temperature in Fahrenheit : 98.6
    98.6° Fahrenheit is 37.0° Celsius
    */
}