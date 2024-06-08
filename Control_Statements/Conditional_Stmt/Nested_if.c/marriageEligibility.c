// Read person age and gender and determine that person is eligible for
// marriage or not.

#include<stdio.h>
void main(){

    int age;
    char gen;
    printf("Enter the age : ");
    scanf("%d",&age);
    printf("Enter the Gender : ");
    scanf(" %c",&gen);

    if(gen=='m' || gen=='M' || gen=='F' || gen=='f')
    {
        if(age>=21 || (gen=='F' || gen=='f') && age>=18)    puts("Eligible");
        else puts("Not Eligible");
    }
    else  puts("Invalid Gender");
    


    /* Enter the age : 21
       Enter the Gender : Not Eligible      -> space should be there before  conversion character 


    Enter the age : 19
    Enter the Gender : M
    Not Eligible

    // below conditions are wrong  -> without outer if
    Enter the age : 24
    Enter the Gender : g
    Eligible

    //after outer if 
    Enter the age : 24
    Enter the Gender : g
    Invalid Gender

    */


}