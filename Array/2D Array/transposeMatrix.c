// Transpose of n*n matrix.
/*
Enter the No. of rows and columns 2 3
Enter 6 elements
1 2 3
4 5 6
Elements are
     1     4
     2     5
     3     6
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
    // just change row to col and col to row for transpose matrix
    for(c=0; c<nc; c++)
    {
        for(r=0; r<nr; r++)
        {
           printf("%6d",a[r][c]);
            printf("\n");
        }
    }
}