
#include<stdio.h>
int main()
{   
    int nr,r,c;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);

    for(r=1; r<=nr; r++)
    {
        // for(c=1; c<=n-r+1; c++)      //sir's expl..
        for(c=nr; c>=r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }

}

/*
Enter no. of rows  10
* * * * * * * * * * 
* * * * * * * * * 
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/