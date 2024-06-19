#include<stdio.h>
int main()
{   
    int i;
    for(i=1; i<=10; i++)
    {

        if(i==2 || i==7) continue;      //it will skip 2 and 7 in series
        printf("%d\n",i);
    }
    puts("thank you");
}