// Finding nth occurrence of array element:

#include<stdio.h>
int main()
{
    int a[100], ele, i,found=0,n,occ;
    printf("Enter array size b/w 1-100 ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search and occurrence ");
    scanf("%d%d",&ele, &occ);

    for(i=0; i<n; i++)
    {
        if(a[i]==ele)   found++;
        if(found==occ){
            printf("%d can be seen in last %dth cell %d time\n",ele,i+1,occ);
            break;
        }
    }
    if(found==0)    printf("%d not found",ele);
}

/*
Enter array size b/w 1-100 4
Enter 4 elements 2 3 1 4
Enter the element to search and occurrence 5 1
5 not found


Enter array size b/w 1-100 5
Enter 5 elements 4 3 3 3 2 
Enter the element to search and occurrence 3 3
3 in 4 cell 3 time
*/