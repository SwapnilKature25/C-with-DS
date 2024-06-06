// Read a person age and gender and determine that person is
// eligible for marriage or not.

#include<stdio.h>
void main(){

    int age;
    char gen;
    printf("Enter Age : ");
    scanf("%d",&age);
    printf("Enter your Gender : ");
    scanf(" %c",&gen);

    if(age>=21 && (gen=='M' || gen=='m'))
    {
        printf("You are eligible for marriage");
    }
    else if(age>=18 &&  (gen=='F' || gen=='f'))
    {
        printf("You are eligible for marriage");

    }
    else {
        printf("You are not eligible for marriage");
    }

}