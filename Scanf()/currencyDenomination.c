// Currency Denomination
#include<stdio.h>
void main(){
    int n;
    printf("Enter the amount ");
    scanf("%d", &n);        //888

    printf("%d-500 notes\n",n/500);     //888/500 => 1
    n=n%500;      //388
    printf("%d-200 notes\n",n/200);     //388/200 => 1
    n=n%200;  //188
    printf("%d-100 notes\n",n/100);     //188/100 => 1
    n=n%100;    //88
    printf("%d-50 notes\n",n/50);     //88/50 => 1
    n=n%50;   //38
    printf("%d-20 notes\n",n/20);     //38/20 => 1
    n=n%20;   //18
    printf("%d-10 notes/Coins\n",n/10);     //18/10 => 1
    n=n%10;   //8
    printf("%d-5 notes/Coins\n",n/5);     //8/5 => 1
    n=n%5;  //3
    printf("%d-2 Coin(s)\n",n/2);     //3/2 => 1
    n=n%2;  //1
    printf("%d-1 Coin(s)\n",n/1);     //1/1 => 1
    // n%1;   //0 


    // printf("%d-500 notes\n",n/500);  n=n%500;     
    // printf("%d-200 notes\n",n/200);  n=n%200;  
    // printf("%d-100 notes\n",n/100);  n=n%100;    
    // printf("%d-50 notes\n",n/50);    n=n%50;   
    // printf("%d-20 notes\n",n/20);    n=n%20;   
    // printf("%d-10 notes/Coins\n",n/10);   n=n%10;   
    // printf("%d-5 notes/Coins\n",n/5);     n=n%5;  
    // printf("%d-2 Coin(s)\n",n/2);         n=n%2;  
    // printf("%d-1 Coin(s)\n",n/1);   


/*
Enter the amount 888
1-500 notes
4-200 notes
8-100 notes
17-50 notes
44-20 notes
1-10 notes/Coins
1-5 notes/Coins
1-2 Coin(s)
888-1 Coin(s)

*/


}


