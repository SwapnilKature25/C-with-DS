/*
Finding trace of n*n matrix:
Trace means sum of principle diagonal elements.


Enter no of rows 3
Enter 9 elements 
1 2 3
4 5 6
7 8 9
Trace = 15
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
            if(r==c)
            {
                s+=a[r][c];
            }
        }
    }
    printf("Trace = %d",s);

}