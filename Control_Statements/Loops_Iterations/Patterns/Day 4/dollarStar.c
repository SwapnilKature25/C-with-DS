#include<stdio.h>
int main()
{   
    int nr,r,c,e=2,o=1;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=r; c++)      
        {
            if((r+c)%2==0)  printf("$ ");
            else   printf("* ");
        }
        printf("\n");
    }

}

/*
Enter no. of rows  10
$
* $
$ * $
* $ * $
$ * $ * $
* $ * $ * $
$ * $ * $ * $
* $ * $ * $ * $
$ * $ * $ * $ * $
* $ * $ * $ * $ * $
*/