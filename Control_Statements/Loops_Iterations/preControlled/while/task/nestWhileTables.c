#include<stdio.h>
int main()
{   
    int i,t=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(t<=n)
    {
        i=1;
        while(i<=10)
        {
            printf("%4d\t",i*t);
            i++;
        }
        printf("\n");
        t++;
     }
}