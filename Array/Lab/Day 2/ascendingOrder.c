/*
Enter array Size 4
Enter 4 array elements 6 4 8 3

Before Sorting :  6 4 8 3
After Sorting in ascending order :  3 4 6 8
*/
#include<stdio.h>
int main()
{
    int n,a[100],i,j,t;
    printf("Enter array Size ");
    scanf("%d",&n);
    printf("Enter %d array elements ",n);
    
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    printf("\nBefore Sorting : ");
    for(i=0; i<n; i++)  printf("%2d",a[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nAfter Sorting in ascending order : ");
    for(i=0; i<n; i++)
    {
        printf("%2d",a[i]);
    }
}
