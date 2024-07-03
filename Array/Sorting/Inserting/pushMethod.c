// Inserting a new element into array at specified position:
// [ right shifting of array elements – push ]

/*
Enter no of elements [1-100] 4
Enter 4 elements 6 4 3 8
Enter new Element and Position 5 1
Elements    5   6   4   3
*/
#include<stdio.h>
int main()
{
    int a[100],i,j,n,ele,pos;
    printf("Enter no of elements [1-100] ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

    printf("Enter new Element and Position ");
    scanf("%d %d",&ele, &pos);

    if(pos<1 || pos>n+1)    printf("Position 1 to %d Only",n+1);
    else {

    for(i=n; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[i]=ele;
    printf("Elements ");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
    }
}