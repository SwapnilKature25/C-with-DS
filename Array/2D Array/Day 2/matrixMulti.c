/*
Matrix multiplication:

Enter no of rows and columns 2 2
Enter 4 elements for a matrix
1 2 3 4
Enter 4 elements for b matrix
5 6 7 8
Result elements are   
  19  22
  43  50
*/
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],nr,nc,r,c,s=0,k;
    printf("Enter no of rows and columns ");
    scanf("%d%d",&nr,&nc);
    printf("Enter %d elements for a matrix\n",nr*nc);
    for(r=0; r<nr; r++)  for(c=0; c<nc; c++) scanf("%d",&a[r][c]);
    
    printf("Enter %d elements for b matrix\n",nr*nc);
    for(r=0; r<nr; r++)  for(c=0; c<nc; c++) scanf("%d",&b[r][c]);

    printf("Result elements are \n");
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            for(s=k=0; k<nc; k++)
            {
                s+=a[r][k]*b[k][c];
            }
            printf("%4d",s);
        }
        printf("\n");
    }

}