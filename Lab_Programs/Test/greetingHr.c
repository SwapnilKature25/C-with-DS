#include<stdio.h>
int main()
{
    int hr;
    printf("Enter the Hour (24-hour format): ");
    scanf("%d",&hr);
    
    if(hr>=0 && hr<12){
        printf("It's Morning");
    }
    
    if(hr>=12 && hr<=16){
        printf("It's Afternoon");
    }
    
    if(hr>16 && hr<=18){
        printf("It's Evening");
    }
    
    if( hr>18 &&  hr<=23) {
        printf("It's Night");
    }
    
  
 return 0; 
}