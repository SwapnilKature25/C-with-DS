/*
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
The Second largest element in the array is : 6

*/
#include<stdio.h>
int main()
{
    int a[20],i,j,n,t;
    printf("Input the size of array : ");
    scanf("%d",&n);

    printf("Input %d elements in the array : \n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            // it will sort the elements in ascending order
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("The Second largest element in the array is : %d",a[i-1]);
    
}