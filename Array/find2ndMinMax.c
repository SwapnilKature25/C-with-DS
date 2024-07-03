// Finding 2nd min, 2nd max elements of array:
/*
Enter no. of Elements [1-100] 4
Enter 4 Elements  7 5 8 3
2nd min=5
2nd max=7
*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,t;
    printf("Enter no. of Elements [1-100] ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>a[0]) {  printf("2nd min=%d\n",a[i]);  break; }
    }

    for(i=n-2; i>=0; i--)
    {
        if(a[i]<a[n-1]) {  printf("2nd max=%d\n",a[i]);  break; }
    }

}