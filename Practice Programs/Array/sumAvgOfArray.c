#include<stdio.h>
int main()
{
    int a[100],i,n,s=0;
    printf("Enter array size between 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("sum=%d, Avg=%d",s,s/n);
}