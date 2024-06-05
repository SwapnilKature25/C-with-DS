#include<stdio.h>
void main()
{  
    /*
     int a,b;
    printf("Enter a 2 digit value ");
    scanf("%d",&a);
    printf("Enter a 3 digit value ");
    scanf("%d",&b);
    printf("a=%d, b=%d", a,b); */

    // Enter a 2 digit value 123 
    // Enter a 3 digit value 3456
    // a=123, b=3456                ---> we r not getting the 2 and 3 digit value for that we have following code 
    
    
    /*
    int a,b;
    printf("Enter a 2 digit value ");
    scanf("%2d",&a);
    printf("Enter a 3 digit value ");
    scanf("%3d",&b);
    printf("a=%d, b=%d", a,b); */
    
    // o/p : Enter a 2 digit value 123456
          // Enter a 3 digit value a=12, b=345

    // Enter a 2 digit value 12345 67678
    // Enter a 3 digit value a=12, b=345



    int a,b;
    printf("Enter a 2 digit value ");
    scanf("%2d",&a);
    fflush(stdin);                  //using fflush() 
    printf("Enter a 3 digit value ");
    scanf("%3d",&b);
    printf("a=%d, b=%d", a,b); 

    // o/p : Enter a 2 digit value 123456
        //   Enter a 3 digit value 1234567
        //   a=12, b=123

    
}