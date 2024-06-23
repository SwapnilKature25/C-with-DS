// print Digits columnwise

#include<stdio.h>
int main()
{   
    int nr,nc,r,c;
    printf("Enter no. of rows and Columns ");
    scanf("%d %d",&nr,&nc);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            printf("%3d ",r);
        }
        printf("\n");
    }

/*
Enter no. of rows and Columns 5 5
  1   1   1   1   1
  2   2   2   2   2
  3   3   3   3   3
  4   4   4   4   4
  5   5   5   5   5

*/
}