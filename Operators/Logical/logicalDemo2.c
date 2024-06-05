#include<stdio.h>
void main()
{
    int a,b,c,d;
    a=printf("I ") || printf("You");
    b=printf("Love ") && printf("Rashmika");
    c=printf(" Thank you ") || printf("Good Bye");
    d=printf("") && printf("I hate Janhvi");
    printf("%d %d %d %d\n",a,b,c,d);


    printf("%d\n", 5 && printf("Hii"));
    printf("%d\n", 0 && printf("Hii"));
    printf("%d\n", -1 && printf("Byee"));

    int x,y,z;
    x=printf("I\n");    //I 2
    y=x*printf("Hate\n");   //Hate 2*5=10
    z=x+y+printf("You\n");  //You 2+10+4=16
    printf("%d %d %d",x,y,z);   
    // op:
    /*
    I
    Hate 
    You 
    2 10 16
    */
}