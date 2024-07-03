/*
Enter array Size 3
Enter 3 array elements 5 3 6
5 
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
    printf("%d ",a[i-1]);
    
}