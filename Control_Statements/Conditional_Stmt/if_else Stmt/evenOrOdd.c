// Finding Even or Odd  ==> Without using % , Arithmetic Operators

#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    // if(n%2==0) printf("Even"); else printf("Odd");      //Enter a number : 4   -> Even
    // if(n%2) printf("odd"); else printf("Even");         //Enter a number : 7   -> odd



    // Without Using % : 
    // if(n/2*2==n) printf("Even"); else printf("Odd");         //Enter a number : 7   -> odd



    // Arithmetic Operators
    if((n&1)==0) printf("Even"); else printf("Odd");         //Enter a number : 9   -> odd


    
} 

