/*
Enter array size in b/w 1-100 5
Enter 5 elements 2 1 3 5 8
Max=8, Min=1
*/
#include<stdio.h>
int main()
{
    int a[100],n,i,max,min;
    printf("Enter array size in b/w 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    for(i=1; i<n; i++)
    {
        if(max<a[i])    max=a[i];
        if(min>a[i])    min=a[i];
    }
    printf("Max=%d, Min=%d",max, min);

}