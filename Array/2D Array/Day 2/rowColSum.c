/*
Finding row and column sum:


*/
#include<stdio.h>
int main()
{
    int r,c,a[10][10],nr,rs=0,cs=0;
    printf("Enter no of rows ");
    scanf("%d",&nr);
    printf("Enter %d elements \n",nr*nr);
    for(r=0; r<nr; r++)  for(c=0; c<nr; c++) scanf("%d",&a[r][c]);
    
    for(r=0; r<nr; r++)
    {
        for(rs=cs=c=0; c<nr; c++)
        {
            rs=rs+a[r][c];
            cs=cs+a[c][r];
        }
        a[r][c]=rs;
        a[c][r]=cs;
    }

    puts("Rows and Columns sum is ");
    for(r=0; r<=nr; r++)
    {
        for(rs=cs=c=0; c<=nr; c++)
        {
           if(r==nr && c==nr);
           else printf("%4d",a[r][c]);
        }
        printf("\n");
    }

}