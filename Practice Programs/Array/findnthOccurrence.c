/*
Enter array size in b/w 1-100 5
Enter 5 elements 1 2 3 1 4
Enter the element to search and occrrence 1 2
1 in 4 cell 2 time
*/
#include<stdio.h>
int main()
{
    int a[100],n,i,ele,found=0,occ;
    printf("Enter array size in b/w 1-100 ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search and occrrence ");
    scanf("%d%d",&ele,&occ);
    for(i=0; i<n; i++)
    {
        if(a[i]==ele)   found++;
        if(found==occ) {
            printf("%d in %d cell %d time\n",ele,i+1,occ);
            break;
        }
    }
    if(found==0)    printf("%d not found",ele);
    else if(found!=occ) printf("%d not found %d time",ele,occ);
}