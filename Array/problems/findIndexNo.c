#include<stdio.h>
int main()
{
    int a[100],n, i, ele,found=0;
    printf("Enter array size between 1-100 ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to Search ");
    scanf("%d",&ele);

    for(i=0; i<n; i++)
    {
        if(a[i]==ele)   printf("%d in a[%d] index\n",ele,i, found=1);
    }

    if(found==0)    printf("%d not found",ele);
}

/*
Enter array size between 1-100 4
Enter 4 Elements 3 4 2 3
Enter the elements to Search 3
3 in a[0] index
3 in a[3] index
*/