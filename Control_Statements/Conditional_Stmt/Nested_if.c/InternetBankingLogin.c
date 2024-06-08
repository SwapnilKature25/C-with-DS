// Internet Banking Style login => We can't tell which input we are giving is wrong.

#include<stdio.h>
#include<string.h>
#define pi 3.14
void main(){
    char user[20], pass[20], cap[20];
    printf("Enter user name : ");
    scanf("%s",user);
    printf("Enter Password : ");
    scanf("%s",pass);
    printf("Enter Captcha : ");
    scanf("%s",cap);

    if(strcmp(user,"Swapnil")==0  &&  strcmp(pass,"Indian")==0  &&  strcmp(cap,"hyd-16")==0)
        puts("Welcome to SBI net Banking");
    else 
        puts("Invalid User name/ password / Captcha");

    /*

    Enter user name : Swapnil
    Enter Password : password
    Enter Captcha : hyd-16
    Invalid User name/ password / Captcha

    Enter user name : Swapnil
    Enter Password : Indian
    Enter Captcha : hyd-16
    Welcome to SBI net Banking

    */
}