
#include <stdio.h>
int main() {
    int a[10][10], b[10][10],i,j,r,c,k,mul;
    printf("Input the rows and columns ");
    scanf("%d %d",&r,&c);

    printf("Enter the %d elements for a matrix \n",r*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("Enter the %d elements for b matrix \n",r*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            for(k=mul=0; k<c; k++)
            {
                mul+=a[i][k] * b[k][j];
            }
            printf("%3d",mul);
        }
        printf("\n");
    }
}