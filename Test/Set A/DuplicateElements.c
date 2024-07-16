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
        c=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                continue;
            }
        }
        if(c==2) printf("%d ",a[i]);
    }

    /*
Enter array size 9
Enter array elements 2 3 3 5 3 4 1 7 2
The duplicate number are : 2 3
    */
}