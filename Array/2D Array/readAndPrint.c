// Reading and printing elements of n*n matrix.
/*
Enter the No. of rows and columns 3 3
Enter 9 elements
4 5 3 7 8 9 5 3 2
Elements are     
     4     5     3
     7     8     9
     5     3     2
*/
#include<stdio.h>
int main()
{
    int a[10][10],r,c,nr,nc; 
    printf("Enter the No. of rows and columns ");
    scanf("%d %d",&nr,&nc);

    printf("Enter %d elements\n",nr*nc);

    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    printf("Elements are \n");
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
           printf("%6d",a[r][c]);
        }
        printf("\n");
    }
}