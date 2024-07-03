/*
Enter array Size 5
Enter 5 array elements 4 3 5 2 5
The Second smallest element in the array is : 3
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
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The Second smallest element in the array is : %d", 
     a[i-1]);


}