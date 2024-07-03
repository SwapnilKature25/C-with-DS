/*

Deleting particular element from array.

1. SKipping the Element

Enter no of elements [1-100] 4
Enter 4 elements 6 5 3 2
Enter new Element to delete 5
Elements    6   3   2

Enter no of elements [1-100] 3 
Enter 3 elements 4 6 3
Enter new Element to delete 52
Elements    4   6   3
52 Not found
*/
#include<stdio.h>
int main()
{
    int a[100],i,n,ele,f=0,j;
    printf("Enter no of elements [1-100] ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

    printf("Enter new Element to delete ");
    scanf("%d",&ele);

    // printf("Elements ");
    // for(i=0; i<n; i++)
    // {
    //     if(a[i]!=ele)   printf("%4d",a[i]);
    //     else f=1;
    // }
    // if(f==0)    printf("\n%d Not found ",ele);




    // Deleting : 

    for(i=0; i<n; i++)
    {
        if(a[i]==ele)
        {
            for(n--,f=1,j=i; j<n;j++)
            {
                a[j]=a[j+1];
                i--;        //if all same elements are side by side it will print only one if not used then it print adjacent element 
            }
        }
        if(f==0)    printf("%d Not found",ele);
        else {
            printf("Elements ");
            for(i=0; i<n; i++)
            {
                printf("%4d",a[i]);
            }
        }
    }

}