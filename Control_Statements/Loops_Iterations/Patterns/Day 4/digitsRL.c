
#include<stdio.h>
int main()
{   
    int nr,r,c;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);

    // for(r=1; r<=nr; r++)
    // {
    //     for(c=1; c<=nr-r+1; c++)      //c=n-r+1
    //     {
    //         printf("%d ",c);
    //     }
    //     printf("\n");
    // }

    // 2nd way
    for(r=nr; r>=1; r--)        //5    //5>=1
    {
        for(c=1; c<=r; c++)      
        {
            printf("%d ",c);
        }
        printf("\n");
    }

}

/*
Enter no. of rows  10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1





Enter no. of rows  5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/