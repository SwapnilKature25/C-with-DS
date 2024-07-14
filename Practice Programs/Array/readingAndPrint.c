#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter array size between 1-100 ");
    scanf("%d",&n);
    if(n<1 || n>100)    puts("array size should be 1-100 only");
    else {
        printf("Enter %d elements",n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Elements are ");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }

    }
}
/*
Enter array size between 1-100 4
Enter 4 elements 12 3 4 5 6
Elements are 12 3 4 5
*/