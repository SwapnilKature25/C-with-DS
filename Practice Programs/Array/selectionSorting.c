/*
Sorting: Arranging data in a order. 
Selection sort in ascending order:

Enter array size in b/w 1-100 5
Enter 5 elements 1 4 2 6 3
Sorted elements    1   2   3   4   6


Enter array size in b/w 1-100 5
Enter 5 elements 1 2 3 4 5
Sorted elements    5   4   3   2   1

*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("Enter array size in b/w 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

    for(i=0; i<n-1; i++)
    {
        for(j=i+1;j<n; j++)
        {
            // if(a[i]>a[j])
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Sorted elements ");
    for(i=0; i<n; i++)  printf("%4d",a[i]);
}