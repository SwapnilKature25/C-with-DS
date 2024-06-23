#include<stdio.h>
int main()
{   
    int i,t,n;
    printf("Enter a number");
    scanf("%d",&n);
    // for(i=1; i<=10; i++)    //row
    // {
    //     for(t=1; t<=n; t++) //column
    //     {
    //         printf("%d * %d = %d\t",t,i,i*t);
    //     }
    //     printf("\n");
    //  }


    for(i=1; i<=10; i++)    //row
    {
        for(t=1; t<=n; t++) //column
        {
            printf("%4d\t",i*t);
        }
        printf("\n");
     }
    return 0;
}