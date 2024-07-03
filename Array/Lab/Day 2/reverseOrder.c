/*
The values store into array are : 
 2 4 0
The values store into array in reverse are : 
 0 4 2
*/

#include<stdio.h>
int main()
{
    int a[100],i,n,t;
    printf("Enter the arrray size ");
    scanf("%d",&n);
    printf("Input %d elements in the array : ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

    printf("The values store into array are : \n");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
    
    // Temporary reverse
    // printf("\nThe values store into array in reverse are : \n");
    // for(i=n-1; i>=0; i--)
    // {
    //     printf("%d",a[i]);
    // }

    // 2 3 4
    // Permanent reverse
    for(i=0; i<n/2; i++)
    {
        t=a[i];         //2     //3
        a[i]=a[n-i-1];      //4     //3
        a[n-i-1]=t;     //2     //3
    }
    
    printf("\nThe values store into array in reverse are : \n");
    for(i=0; i<n; i++)
    {
        printf("%2d",a[i]);
    }

}