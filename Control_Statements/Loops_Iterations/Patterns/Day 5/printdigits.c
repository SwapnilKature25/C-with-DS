

#include<stdio.h>
int main()
{   
    int n,nr,r,c,a;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);
    a=nr*(nr+1)/2;
    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=r; c++)
        {
            printf("%3d ",a--);
        }
        printf("\n");
    }
}
/*
Enter no. of rows  3
  6
  5   4
  3   2   1
*/