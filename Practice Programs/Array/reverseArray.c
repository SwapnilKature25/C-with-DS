#include<stdio.h>
int main()
{
    int a[100],i,n,s=0;
    printf("Enter array size between 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    printf("Elements in reverse order ");
    // Temporarily
    // for(i=n-1; i>=0; i--)
    // {
    //     printf("%d ",a[i]);
    // }

    // Permanent :      1234
    // for(i=0; i<n/2; i++)
    // {
    //     int t=a[i];         //t=1   t=2  
    //     a[i]=a[n-i-1];      //0=4   1=3
    //     a[n-i-1]=t;     //4=t   3=t
    // }
    // for(i=0; i<n; i++)  printf("%d ",a[i]);



    // without using temp var : 
    for(i=0; i<n/2; i++)
    {
        a[i]=a[i]+a[n-i-1];
        a[n-i-1]=a[i]-a[n-i-1];
        a[i]=a[i]-a[n-i-1];
    }
    for(i=0; i<n; i++)  printf("%d ",a[i]);

}
/*
Enter array size between 1-100 4
Enter 4 elements 2 3 1 5
Elements in reverse order 5 1 3 2
*/


/*
Enter array size between 1-100 5
Enter 5 elements 1 2 3 4 5
Elements in reverse order 5 4 3 2 1
*/