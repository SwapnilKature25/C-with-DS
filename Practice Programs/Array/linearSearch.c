/*
Enter array size in b/w 1-100 5
Enter 5 elements 1 2 3 4 5
Enter the elements to search 5
5 in 5 cell
*/

#include<stdio.h>
int main()
{
    int a[100],n,i,ele,found=0;
    printf("Enter array size in b/w 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to search ");
    scanf("%d",&ele);

    for(i=0; i<n; i++)
    {
        if(a[i]==ele)   printf("%d in %d cell\n",ele,i+1,found=1);
    }
    if(found==0)    printf("%d not found",ele);
}