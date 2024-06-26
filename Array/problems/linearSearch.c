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
        if(a[i]==ele)   printf("%d in %d cell\n",ele,i+1, found=1);
    }

    if(found==0)    printf("%d not found",ele);
}

/*
Enter array size between 1-100 5
Enter 5 Elements 3 2 4 3 1  
Enter the elements to Search 3
3 in 1 cell
3 in 4 cell
*/