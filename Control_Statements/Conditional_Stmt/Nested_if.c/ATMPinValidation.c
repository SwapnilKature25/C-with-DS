// ATM PIN Validation:

#include<stdio.h>
void main(){

    int pin,count=0;
    start:
    printf("Enter PIN no : ");
    scanf("%4d",&pin);
    if(pin==1234) puts("Welcome to HDFC ATM");
    else{
        count++;
        if(count==3)    puts("Your Card Blocked For 24-Hours");
        else  {  puts("Invalid PIN"); goto start; }
    }



    /*

    Enter PIN no : 12345678
    Welcome to HDFC ATM


    Enter PIN no : 2155
    Invalid PIN
    Enter PIN no : 2134
    Invalid PIN
    Enter PIN no : 2345
    Your Card Blocked For 24-Hours
    */

}