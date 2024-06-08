// ELECTRICITY BILL GENERATION
// DOMESTIC SLAB SYSTEM
#include<stdio.h>
void main(){
    long serviceno, previous,current,units;
    char name[20];
    float amt;
    printf("Enter Service no. ");
    scanf("%ld",&serviceno);
    printf("Enter Customer name ");
    scanf("%s",name);
    printf("Enter Previous month reading ");
    scanf("%ld",&previous);

    currentr:
    printf("Enter Current month reading ");
    scanf("%ld",&current);

    if(current<previous){
        puts("\aCheck Current month reading");
        goto currentr;
    }
    units=current-previous;

    if(units<=50)   amt=units*1.45;
    else if(units<=100)   amt=50*1.45 + (units-50)*2.8;
    else if(units<=200)   amt=50*1.45 + 50*2.8 + (units-100)*3.05;
    else if(units<=300)   amt=50*1.45 + 50*2.8 + 100*3.05 + (units-200)*4.75;
    else if(units<=500)   amt=50*1.45 + 50*2.8 + 100*3.05 + 200*4.75 + (units-300)*6;
    else amt=50*1.45 + 50*2.8 + 100*3.05 + 200*4.75 + 300*6 + (units-500)*6.25;

    if(amt<50) amt=50;
    printf("Amount = %.2f",amt);

    /*
    Enter Service no. 1  
    Enter Customer name Swap
    Enter Previous month reading 1400
    Enter Current month reading 170
    Check Current month reading
    Enter Current month reading 1700
    Amount = 992.50


    before goto 
    Enter Service no. 2
    Enter Customer name swap
    Enter Previous month reading 0
    Enter Current month reading 1200
    Amount = 50.00
    
    */
}