#include<stdio.h>
#include<math.h>
void main(){
    /*
    int a,b;
    printf("\nEnter the 2 Numbers : ");
    scanf("%d%d",&a,&b);

    printf("Sum = %d\n", a+b);   
    printf("Sub = %d\n", a-b);   
    printf("Mult = %d\n", a*b);   
    printf("Div = %d\n", a/b);   
    printf("Mod = %d\n", a%b);   */ 

    /*
        Enter the 2 Numbers : 5 2
        Sum = 7
        Sub = 3
        Mult = 10
        Div = 2
        Mod = 1
    */



    float a,b;
    printf("\nEnter the 2 Numbers : ");
    scanf("%f%f",&a,&b);

    printf("Sum = %.2f\n", a+b);   
    printf("Sub = %.2f\n", a-b);   
    printf("Mult = %.2f\n", a*b);   
    printf("Div = %.2f\n", a/b);  
    printf("Mod = %.2f\n", fmod(a,b));     // Mod doesnt return its value by defaulr in int so we have to use fmod().
    // printf("Mod = %.2f\n", a%b);   //error: invalid operands to binary % (have 'float' and 'float')

        /*
        Enter the 2 Numbers : 5.5 3.3
        Sum = 8.80
        Sub = 2.20
        Mult = 18.15
        Div = 1.67
        Mod = 2.20
        */

}