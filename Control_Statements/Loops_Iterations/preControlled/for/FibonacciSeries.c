// Fibonacci series:
// 5 Fibonacci series 0 1 1 2 3

#include<stdio.h>
int main()
{
        
        int n,f1=0,f2=1,f3;
        printf("Enter the Number ");        
        scanf("%d",&n);
        printf("%d %d",f1,f2);
        for(int i=2; i<n; i++)
        {
            f3=f1+f2;
            printf(" %d ",f3);
            f1=f2;
            f2=f3;
        }
}