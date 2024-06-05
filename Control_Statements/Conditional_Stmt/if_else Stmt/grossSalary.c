// Read Salesman Sales and find the gross salary using below table
/*

    Sales>=100000               Sales<100000
    Basic=10000                 Basic=10000
    Da=65.5% of basic           Da=65.5% of basic
    Bonus=10000                 Bonus=2000
    Commission=10% of sales     Commission=5% of sales

         Gross = basic + da + bonus + commission

*/
#include<stdio.h>
void main()
{
    float sales,basics=10000, da=basics*65.5/100, bonus, comm, gross;
    printf("Enter Sales amount ");
    scanf("%f",&sales);
    if(sales>=100000) { bonus=10000;  comm=sales*10/100;  }
    else { bonus=2000;  comm=sales*5/100;  }

    gross = basics + da + bonus + comm ;
    printf("Basic= %.2f\n", basics);
    printf("Da= %.2f\n", da);
    printf("Bonus= %.2f\n", bonus);
    printf("Comm= %.2f\n", comm);
    printf("Gross= %.2f\n", gross);

    /*
        Enter Sales amount 100000
        Basic= 10000.00
        Da= 6550.00
        Bonus= 10000.00
        Comm= 10000.00
        Gross= 36550.00
    */
   
   /*
        Enter Sales amount 99999.99
        Basic= 10000.00
        Da= 6550.00
        Bonus= 2000.00
        Comm= 5000.00
        Gross= 23550.00
   */
}