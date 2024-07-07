// Finding trace of right diagonal elements:
/*
Enter no of rows 3
Enter 9 elements
9 1 7
0 5 2
8 4 3
Trace = 20
*/
#include<stdio.h>
int main()
{
    int r,c,a[10][10],nr,s=0;
    printf("Enter no of rows ");
    scanf("%d",&nr);
    printf("Enter %d elements ",nr*nr);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nr; c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    
     
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nr; c++)
        {
            if(r+c==nr-1)
            {
                s+=a[r][c];
            }
        }
    }
    printf("Trace = %d",s);

}