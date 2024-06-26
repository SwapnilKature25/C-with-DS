// Read n elements into array and arrange array elements in reverse order. :

// Temporarily :

#include<stdio.h>
int main()
{
    int a[100],n,s=0;
    printf("Enter array Size between 1-100 ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    // printf("Elements in reverse Order ");

    // for(int i=n-1; i>=0; i--)
    // {
    //     printf("%4d",a[i]);
    // }

    /*
Enter array Size between 1-100 4 
Enter 4 elements 2 3 4 6
Elements in reverse Order    6   4   3   2   
    */





//    Permanent :   Using Temp variable

    // for(int i=0; i<n/2; i++)
    // {
    //     // swapping
    //     int t=a[i];
    //     a[i]=a[n-i-1];
    //     a[n-i-1]=t;
    // }

    // printf("Elements in reverse Order ");
    // for(int i=0; i<n; i++)
    // {
    //     printf("%4d",a[i]);
    // }

/*
Enter array Size between 1-100 5
Enter 5 elements  3 2 5 9 7
Elements in reverse Order    7   9   5   2   3    
*/




    // Without Using temp variable.

     for(int i=0; i<n; i++)
    {
        // swapping
        a[i]=a[i]+a[n-i-1];
        a[n-i-1]=a[i]-a[n-i-1];
        a[i]=a[i]-a[n-i-1];
    }

    printf("Elements in reverse Order ");
    for(int i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }


}