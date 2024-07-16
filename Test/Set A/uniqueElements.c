#include<stdio.h>
int main()
{
    int a[20],i,j,n,c;
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter array elements ");
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    printf("The duplicate number are : ");
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=i+1; j<n; j++)
        {
            if(a[i]!=a[j])
            {
                c++;
                continue;
            }
        }
        if(c==0) printf("%d ",a[i]);
    }

    /*

    */
}