/*
The Even elements are :  2 4 6
The Odd elements are :  5 7
*/

#include<stdio.h>
int main()
{
    int n,a[100],i,j,t;
    printf("Enter array Size ");
    scanf("%d",&n);
    printf("Enter %d array elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Even elements are : ");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)   printf("%2d",a[i]);
    }
    printf("\nThe Odd elements are : ");
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)   printf("%2d",a[i]);
    }
}