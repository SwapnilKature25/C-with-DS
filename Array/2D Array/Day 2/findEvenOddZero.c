/*
Read elements into n*n matrix and find the no of even /
odd / zero elements row wise:

        Even     Odd     Zero
-------------------------------------------
1-row    1      1       1
2-row    2      1       0
3-row    1      1       1

*/
#include<stdio.h>
int main()
{
    int r,c,a[10][10],nr,e,o,z;
    printf("Enter no of rows ");
    scanf("%d",&nr);
    printf("Enter %d elements \n",nr*nr);
    for(r=0; r<nr; r++)
    {
        for(c=0; c<nr; c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    
    printf("\tEven\t Odd\t Zero\n");
    puts("-------------------------------------------");
    // for row wise
    // for(r=0; r<nr; r++)
    // {
    //     e=o=z=0;
    //     for(c=0; c<nr; c++)
    //     {
    //         if(a[r][c]==0)   z++;
    //         else if(a[r][c]%2==0)  e++;
    //         else o++;
    //     }
    //     printf("%d-row\t %d\t%d\t%d\n",r+1,e,o,z);
    // }


    // for column wise 
    for(c=0; c<nr; c++)
    {
        e=o=z=0;
        for(r=0; r<nr; r++)
        {
            if(a[r][c]==0)   z++;
            else if(a[r][c]%2==0)  e++;
            else o++;
        }
        printf("%d-col\t %d\t%d\t%d\n",c+1,e,o,z);
    }

    /*
Enter no of rows 4
Enter 16 elements 
1 2 0 3
2 0 3 6
1 3 5 7
2 2 2 0
        Even     Odd     Zero
-------------------------------------------
1-col    2      2       0
2-col    2      1       1
3-col    1      2       1
4-col    1      2       1
    */
}