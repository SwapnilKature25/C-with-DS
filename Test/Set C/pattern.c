/*
Enter a row and col 5 5
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 
*/

#include<stdio.h>
int main()
{
    int r,c,nr,nc,i,a,k,t;
    printf("Enter a row and col ");
    scanf("%d%d",&nr,&nc);

    for(r=1; r<=nr; r++)
    {
        t=r;
        for(c=1,k=nr-1; c<=r; c++,k--)
        {
            printf("%d ",t);
            t+=k;
        }
        printf("\n");
    }
}