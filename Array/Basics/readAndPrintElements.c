// Reading and printing of array elements:

#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter array Size between 1-100 ");
    scanf("%d",&n);

    if(n<1 || n>100)   puts("array size 1- 100 only");
    else {
        printf("Enter %d elements ",n);
        for(int i=0; i<4; i++)  scanf("%d",&a[i]);

        printf("Elements are ");

        for(int i=0; i<4; i++)  printf("%6d",a[i]);
    
    }
}