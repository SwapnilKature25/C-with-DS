// print Digits gambling

#include<stdio.h>
int main()
{   
    int nr,nc,r,c,a;
    printf("Enter no. of rows and Columns ");
    scanf("%d %d",&nr,&nc);

    for(r=1; r<=nr; r++)
    {
        for(a=r, c=1; c<=nc; c++)
        {
            printf("%3d ",a++);
        }
        printf("\n");
    }

/*
Enter no. of rows and Columns 3 4 
  1   2   3   4 
  2   3   4   5 
  3   4   5   6 
*/
}