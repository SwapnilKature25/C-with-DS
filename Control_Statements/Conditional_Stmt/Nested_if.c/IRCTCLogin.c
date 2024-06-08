// IRCTC style Login:  https://www.irctc.co.in/nget/train-search

#include<stdio.h>
void main(){

    char user[25],pass[25],cap[25];
    // Way - 1
    printf("Enter Your User name : ");
    scanf("%s", user);
    // printf("Enter Your Password : ");
    // scanf("%s", pass);
    // printf("Enter Your Captcha : ");
    // scanf("%s", cap);

    // if(strcmp(user,"Swapnil")==0)   
    // {
    //     if(strcmp(pass,"password")==0)
    //     {
    //         if(strcmp(cap,"hyd16")==0)
    //         {
    //             printf("Welcome to IRCTC ");
    //         }
    //         else    printf("Invalid Captcha");
    //     }
    //     else    printf("Invalid Password");
    // }
    // else    printf("Invalid Username");


    /*

        Enter Your User name : Swapnil
        Enter Your Password : password
        Enter Your Captcha : hyd16
        Welcome to IRCTC


        Enter Your User name : Swapnil
        Enter Your Password : password
        Enter Your Captcha : hyd16
        Invalid Captcha


        Enter Your User name : swap
        Enter Your Password : pawsedf
        Enter Your Captcha : sadfsa
        Invalid Username

        in above o/p the outer if condition not giving the error instantly but
        it waits for pass and captcha then throwing the error. so to overcome it we have following code.
    */




//    2nd way 

   if(strcmp(user,"Swapnil")==0)   
    {
        printf("Enter Your Password : ");
        scanf("%s", pass);
        if(strcmp(pass,"password")==0)
        {
            printf("Enter Your Captcha : ");
            scanf("%s", cap);
            if(strcmp(cap,"hyd16")==0)
            {
                printf("Welcome to IRCTC ");
            }
            else    printf("Invalid Captcha");
        }
        else    printf("Invalid Password");
    }
    else    printf("Invalid Username");


    /*

    Enter Your User name : sdfgg
    Invalid Username

    Enter Your User name : Swapnil
    Enter Your Password : pass
    Invalid Password

    Enter Your User name : Swapnil
    Enter Your Password : password
    Enter Your Captcha : hyd16
    Welcome to IRCTC


    */

}