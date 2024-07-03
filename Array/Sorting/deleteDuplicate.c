// Deleting duplicate from the array:

#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("Enter no. of Elements [1-100] ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                for(n--, k=j; k<n; k++)
                {
                    a[k]=a[k+1];
                    j--;
                }
            }
        }
        printf("Elements ");
        for(i=0; i<n; i++)  printf("%4d",a[i]);
    }

}