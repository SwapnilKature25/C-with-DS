#include<stdio.h>
int main()
{
    float qty,amt=0;
    int opt;
    start:
    puts("********************************************************************************************");
    puts("\t\t\tHOTEL SHREE BALAJI ");
    puts("\t\t\t\tAMEERPET ");
    puts("********************************************************************************************");
    puts("\t\t 1. Tea - 10/-");
    puts("\t\t 2. Coffee/Milk/Boost/Horlicks/Lemon Tea/Water Bottle - 20/-");
    puts("\t\t 3. Plain dosa / Idly / poha / upma / bonda - 30/-");
    puts("\t\t 4. Masala/onion/karam/upma dosa / wada / sambar idly - 40/-");
    puts("\t\t 5. Ghee dosa / Veg biryani/ sambar wada - 50/-");
    puts("\t\t 6. Bill");
    puts("\t\t 7. Cancel");
    puts("\t\t 8. Close");
    puts("********************************************************************************************");
    printf("\t\tEnter Ur Option[]\b\b");
    scanf("%d",&opt);

    if(opt<=5){
        puts("\t\tEnter Quantity ");
        scanf("%f",&qty);
    }
    else if(opt==6){
        printf("Your Bill amount=%.2f",amt);
        amt=0;
    }
    else if(opt==7){
        printf("Your Ordere Cancelled");
        amt=0;
    }
    else if(opt==8)  return 0;


    switch(opt){
        case 1: amt=amt+qty*10;  break;
        case 2: amt=amt+qty*20;  break;
        case 3: amt=amt+qty*30;  break;
        case 4: amt=amt+qty*40;  break;
        case 5: amt=amt+qty*50;  break;
    }
    
    goto start;



}