/*
Enter no of elements [1-100] 4
Enter 4 elements 2 5 7 8
Sorted Elements   8  7  5  2
*/

#include<stdio.h>
int main()
{
    int a[100],i,j,n,t;
    printf("Enter no of elements [1-100] ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-i-2; j++)
        {
            if(a[j]< a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Elements ");

    for(i=0; i<n; i++)
    {
        printf("%3d",a[i]);
    }

}