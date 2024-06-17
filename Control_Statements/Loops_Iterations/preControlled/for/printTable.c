/*
Printing given table:
9 th table
9*1=9
9*2=18
9*3=27
9*10=90
*/

#include<stdio.h>
int main()
{
        
        int n;
        printf("Enter the Value ");        //123 
        scanf("%d",&n);

        for(int i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n",n,i,(n*i));
        }
}