// Read a Customer id, name, quantity purchased and rate of item. Find the amount , 35% discount and total.
//  amount = quantity * price ;
//  Discount = amount * discount/100;
//  Total = amount - discount ; 


#include<stdio.h>
void main(){
    // int id;
    // char name[20];
    // float qty,price,amount,disc, total;
    // printf("Enter Customer id, name, Quantity purchased and rate of item \n");
    // scanf("%d %s %f %f",&id,&name,&qty,&price);

    // amount=qty*price;
    // disc=amount *35/100;
    // total=amount-disc;
    // printf("Amount = %.2f, Disc = %.2f, Total = %.2f",amount,disc,total);

    /*
    o/p :
    Enter Customer id, name, Quantity purchased and rate of item 
    1 swapnil 1 100
    Amount = 100.00, Disc = 35.00, Total = 65.00

    // Error Space not allowed in string
    Enter Customer id, name, Quantity purchased and rate of item 
    1 Swapnil Kature 1 100
    Amount = -1.#R, Disc = -1.#R, Total = -1.#R
    */





   //Flexible discount:

    int id;
    char name[20];
    float qty,price,amount,disc, total;
    printf("Enter Customer id, name, Quantity purchased and rate of item \n");
    scanf("%d %s %f %f",&id,&name,&qty,&price);

    printf("Enter the Discount Percentage : ");
    scanf("%f",&disc);
    amount=qty*price;
    disc=amount *disc/100;      //35/100 => disc/100
    total=amount-disc;
    printf("Amount = %.2f, Disc = %.2f, Total = %.2f",amount,disc,total);

    /*
    o/p :
    Enter Customer id, name, Quantity purchased and rate of item 
    4 krish 1 89999
    Enter the Discount Percentage : 80
    Amount = 89999.00, Disc = 71999.20, Total = 17999.80

    */
}

