#include<stdio.h>
int deposit(int bal)
{
    int dep;
    printf("Deposit : ");
    scanf("%d",&dep);
    if(dep<=0)  printf("Invalid amount to deposit");
    else {
        bal+=dep;
         printf("Deposited : Rs. %d\n",dep);
    }
    return bal;
}
int Withdraw(int bal)
{
    int wtd;
    printf("Withdraw : ");
    scanf("%d",&wtd);
    if(wtd<=0)  printf("Invalid amount to withdrawal\n");
    else if(wtd>bal)    printf( "Insufficient Funds\n");
    else {
        bal-=wtd;
         printf("Withdrew : Rs. %d\n",wtd);
    }
    return bal;
}
int checkBal(int bal)
{
    return bal;
}
int main()
{
    int dep,wtd,check,bal,opt;
    bal=2000;
    start:
    printf("\nChoose what operations you want to do \n1. Deposit\n2. Withdraw\n3. Check alance\n");
    scanf("%d",&opt);
    if(opt==1) 
    {
         bal=deposit(bal);
        printf("Current Balance : Rs. %d\n",bal);
        goto start;
    }
    else if(opt==2) 
    {
        bal=Withdraw(bal);
        printf("Current Balance : Rs. %d\n",bal);
        goto start;
    }
    else {
        printf("Current Balance : Rs. %d\n",checkBal(bal));
        goto start;
    }


}




/*
Choose what operations you want to do 
1. Deposit
2. Withdraw
3. Check alance
1
Deposit : 500
Deposited : Rs. 500
Current Balance : Rs. 2500

Choose what operations you want to do 
1. Deposit
2. Withdraw
3. Check alance
2
Withdraw : 1000
Withdrew : Rs. 1000
Current Balance : Rs. 1500

Choose what operations you want to do
1. Deposit
2. Withdraw
3. Check alance
3
Current Balance : Rs. 1500

Choose what operations you want to do
1. Deposit
2. Withdraw
3. Check alance
2
Withdraw : 3000
Insufficient Funds
Current Balance : Rs. 1500
*/