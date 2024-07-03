// Sorting: Arranging data in a order. 

// Selection sort in ascending order:

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
        for(j=i+1; j<=n-1; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Sorted Elements ");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
}

/*

Enter no of elements [1-100] 5
Enter 5 elements 2 3 1 5 9  
SOrted Elements    1   2   3   5   9
*/