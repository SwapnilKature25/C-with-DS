#include<stdio.h>
void main(){ 
    //1. print 1 to 10 no. without using loop:

    int i;
    a:
    if(i<=10)
    {
        printf("%d\n",i);
        i++;
        goto a;
    }



    //2. find absolute +ve val

    // if(n<0) n=-n; printf("abs val=%d",n);  

    // 3. using abs()   => printf("abs val=%d",abs(n)); 

    char ch;
    printf("Enter a char");
    scanf("%c",&ch);
    //  4. Finding Lower case char      Enter a charo%d is Lower Case
    // if(ch>='a' && ch<='z') puts(" Lower Case");
    // Enter a char o
    //  Lower Case

    if(ch>='a' && ch<='z' ) puts("  Lower Case");
    if(!(ch>='a' && ch<='z' )) puts(" Not Lower Case");
    // o/p : Enter a char L
    //       Not Lower Case  

}