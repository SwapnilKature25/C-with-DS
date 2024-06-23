

#include<stdio.h>
int main()
{   
    int n,nr,nc,r,c,a=1;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            printf("%3d ",a++);
        }
        printf("\n");
    }


}