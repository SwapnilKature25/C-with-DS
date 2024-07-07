/*
Input the no of rows : 3
Input the no of columns : 3
Input 9 elements in the matrix : 
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
#include <stdio.h>

int main() {
    int i,j,a[10][10],nr,nc;
    printf("Input the no of rows and columns : ");
    scanf("%d %d",&nr,&nc);
    printf("Input %d elements in the matrix : ",nr*nc);
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("\nelement - [%d],[%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    


}