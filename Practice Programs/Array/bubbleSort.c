/*
Bubble sort: 
Enter array size in b/w 1-100 5
Enter 5 elements 4 3 1 5 4
Sorted elements   1  3  4  4  5
*/

#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf("Enter array size in b/w 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    
    for(i=0; i<=n-2; i++)
    {
        for(j=0; j<=n-i-2; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted elements ");
    for(i=0; i<n; i++)  printf("%3d",a[i]);
}