#include<stdio.h>
// #include<dos.h>
int main()
{   
    int i,t,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        for(t=1; t<=n; t++)
        {
            printf("%d * %d = %d\n",t,i,i*t);
        }
        printf("\n");
        // delay(1000);
    }
}