/*
Find the Nth max, Nth min array elements:
Array elements - 1 3 7 9 12 35 44 50
3rd min – 7
4th max – 12


Enter no. of Elements [1-100] 10
Enter 10 Elements 1 1 2 3 4 5 6 7 8  8
Enter Nth Max, Nth Min values 4 6
Max=5
min=6
*/

#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,t,max,min;
    printf("Enter no. of Elements [1-100] ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Nth Max, Nth Min values ");
    scanf("%d%d",&max,&min);

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
    for(i=n-2; i>=0; i--)
    {
        if(a[i]<a[i+1]) max--;
        if(max==1){
            printf("Max=%d\n",a[i]);
            break;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]>a[i-1]) min--;
        if(min==1){
            printf("min=%d\n",a[i]);
            break;
        }
    }
}