#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a,b and c values ");
    scanf("%d%d%d",&a,&b,&c);

    // if(a==b && b==c)  puts("All Values are Equal");
    // else if(a>b && a>c)  puts("a is big");
    // else if(b>a && b>c)  puts("b is big");
    // else  puts("c is big");

    /*
    Enter a,b and c values 1 2 4
    c is big

    Enter a,b and c values 2 1 2
    c is big    ---> first it checks that a>c or not and it became false so it will gone to last else and gets printed.
                --> it is showing c big but both are equal so it's wrong checking we can go with below program
    
    */



   if(a==b && b==c)  puts("All Values are Equal");
    else if(a>b && a>c)  puts("a is big");
    else if(a==b && a>c)  puts("a & b are big");
    else if(b==c && b>a)  puts("b & c are big");
    else if(c==a && c>b)  puts("c & a are big");
    else if(b>c)  puts("b is big");         //b>a && b>c => don't use both because a becomes false so no need to take it in condi.
    else  puts("c is big");

    /*

    Enter a,b and c values 1 1 0
    a & b are big

    Enter a,b and c values 5 6 6 
    b & c are big

    Enter a,b and c values 3 1 3
    c & a are big
    
    Enter a,b and c values 5 5 5
    All Values are Equal

    */
}