


#include<stdio.h>
int main()
{
    int a[100], ele, i,n,max,min;
    printf("Enter array size b/w 1-100 ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    max=min=a[0];   //optional
    for(i=0; i<n; i++)
    {
        if(max<a[i])   max=a[i];
        if(min>a[i])    min=a[i];
    }
    printf("Max=%d, Min=%d",max,min);
}