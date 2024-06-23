#include<stdio.h>
#include<process.h>
int main()
{   
    int i,t,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(t=1; t<=n; t++)
    {
        for(i=1; i<=10; i++)
        {
            printf("%d * %d = %d\n",t,i,i*t);
        }
        printf("\n");
        // delay(1000);
    }
    return 0;
}