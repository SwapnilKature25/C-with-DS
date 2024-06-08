
// Gmail Style Login
#include<stdio.h>
#include<string.h>
#define pi 3.14
void main(){
    char user[20], pass[20], cap[20];
    printf("Enter user name : ");
    scanf("%s",user);

    if(strcmp(user,"Swapnil")==0){
        printf("Enter the password : ");
        scanf("%s",pass);

        if(strcmp(pass,"Indian")==0){
            printf("Enter Captcha : ");
            scanf("%s",cap);

            if(strcmp(cap,"Hyd-16")==0){
                 printf(" Welcome to Gmail");
            }
            else{
                 printf("Invalid Captcha");
            }
        }
        else{
            printf("Invalid Password");
        }
    }
    else{
        printf("Invalid User");
    }

    /*

    Enter user name : swadc
    Invalid User

    Enter user name : Swapnil
    Enter the password : India
    Invalid Password

    Enter user name : Swapnil 
    Enter the password : Indian
    Enter Captcha : hyd-16
    Invalid Captcha

    */
}