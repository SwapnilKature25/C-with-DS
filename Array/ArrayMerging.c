/*
Enter no. of Elements for 1st array [1-100] 4
Enter 4 Elements 2 4 5 6
Enter no. of Elements for 2nd array [1-100] 4 
Enter 4 Elements 8 7 9 0
   0   2   4   5   6   7   8   9
*/
#include<stdio.h>
int main()
{
    int a[100],b[100],n1,n2,i,j,t;
    printf("Enter no. of Elements for 1st array [1-100] ");
    scanf("%d",&n1);
    printf("Enter %d Elements ",n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter no. of Elements for 2nd array [1-100] ");
    scanf("%d",&n2);
    printf("Enter %d Elements ",n2);
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=n1, j=0; j<n2; i++,j++)   a[i]=b[j];
    for(i=0; i<n1+n2; i++)  
    {
        for(j=i+1; j<n1+n2; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0; i<n1+n2; i++)  printf("%4d",a[i]);


}