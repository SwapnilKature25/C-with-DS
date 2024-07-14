
/*
Enter no of rows and cols 3 3
Enter 9 elements for a matrix
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
1 2 3 
4 5 6
7 8 9
*/
#include<stdio.h>
int main()
{
    int a[3][3],r,c,nr,nc;
    printf("Enter no of rows and cols ");
    scanf("%d%d",&nr,&nc),
    printf("Enter %d elements for a matrix\n",nr*nc);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            printf("element - [%d],[%d] : ",r,c);
            scanf("%d",&a[r][c]);
        }
    }

    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
    

}