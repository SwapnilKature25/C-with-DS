
/*
Finding fractions of n*n matrix:

Enter no of rows and columns 2 2
Enter 4 elements for a matrix
2 4 6 8
Enter 4 elements for b matrix
1 2 3 4
Fractions are 
      2.00      2.00
      2.00      2.00
*/
#include<stdio.h>
int main()
{
    float a[10][10],b[10][10];
    int nr,nc,r,c;
    printf("Enter no of rows and columns ");
    scanf("%d%d",&nr,&nc);
    printf("Enter %d elements for a matrix\n",nr*nc);
    for(r=0; r<nr; r++)  for(c=0; c<nc; c++) scanf("%d",&a[r][c]);
    
    printf("Enter %d elements for b matrix\n",nr*nc);
    for(r=0; r<nr; r++)  for(c=0; c<nc; c++) scanf("%d",&b[r][c]);

    puts("Fractions are ");
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nc; c++)
        {
            printf("%10.2f",a[r][c]/b[r][c]);
        }
        printf("\n");
    }
    
}