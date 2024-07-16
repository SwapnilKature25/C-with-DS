/*
Enter array size 7
Enter array ELements 12 11 2 4 6 5 3
11 2 5 3 
*/
#include<stdio.h>
int main()
{
    int a[20],i,n,j,c;
    printf("Enter array size ");
    scanf("%d",&n);

    printf("Enter array ELements ");
    for(i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=a[i]; j>0; j--)
        {
            if(a[i]%j==0)  c++;
        }
        if(c==2)    printf("%d ",a[i]);
    }

}