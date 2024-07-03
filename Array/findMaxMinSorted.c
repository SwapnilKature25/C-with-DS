// Finding max, min elements of sorted array:

#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,t;
    printf("Enter no. of Elements [1-100] ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-2; i++)
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
    // ,a[0] = min    a[n-1] =  nth value
    printf("1st min=%d, 1st Max=%d",a[0], a[n-1]);  


}