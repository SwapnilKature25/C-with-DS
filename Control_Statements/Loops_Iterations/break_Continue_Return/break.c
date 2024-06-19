#include<stdio.h>
int main()
{       
    // puts("Good Afternoon");
    // break;
    // puts("Good Night");
    // error: break statement not within loop or switch

    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d\n",i);
    }

    
    for(i=1; i<=10; i++)
    {
        if(i==5)   break;
        // here it stop at 5  i.e 5 will not print
        printf("%d\n",i);
    }
    puts("Thank You");


}