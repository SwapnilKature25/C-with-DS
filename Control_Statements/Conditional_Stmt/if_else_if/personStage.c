#include<stdio.h>
void main(){

    int age;
    printf("Enter Age : ");
    scanf("%d",&age);

    if(age<=3)  puts("Baby");
    else if(age<=13)    puts("Child");
    else if(age<=19)    puts("Teenage");
    else if(age<=35)    puts("Adult");
    else if(age<=49)    puts("Middle Aged");
    else puts("Senior Citizens");

    /*
        Enter Age : 34
        Adult

        Enter Age : 56
        Senior Citizens

    */
}