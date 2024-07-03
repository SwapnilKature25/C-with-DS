#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;
    printf("Enter the Array elements to be stored in array ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
}