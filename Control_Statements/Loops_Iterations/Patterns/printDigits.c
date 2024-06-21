// print Digits rowwise

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
            printf("%d ",c);
        }
        printf("\n");
    }

/*
Enter no. of rows and Columns 5 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
}