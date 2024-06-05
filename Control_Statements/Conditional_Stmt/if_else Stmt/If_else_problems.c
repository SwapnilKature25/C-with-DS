#include<stdio.h>
void main(){ 
    // Finding Special Char or not
    char ch;
    printf("Enter a char ");
    scanf("%c",&ch);
    if(!(ch>='a' && ch<='z'|| ch>='A' && ch<='Z'|| ch>='0' && ch<='9' )) puts(" Special Char");
    else puts("Not a Special Char");


    // Finding 2 digit no. or not
    int n;
    printf("Enter a no. ");
    scanf("%d",&n);
    if(n>=10 && n<=99  || n<=-10 && n>=-99) puts("Its a 2 digit no.");
    else puts("It's not a 2 digit no.") ;
}