// print even reverse Digits 

#include<stdio.h>
int main()
{   
    int nr,nc,r,c,a;
    printf("Enter no. of rows and Columns ");
    scanf("%d %d",&nr,&nc);

    for(r=1; r<=nr; r++)
    {
        for(a=nc,c=1; c<=nc; c++)
        {
            // if row is even print reverse number 
            if(r%2==0)  printf("%3d ",a--);
            else printf("%3d ",c);
        }
        printf("\n");
    }
/*
Enter no. of rows and Columns 5 8
1 2 3 4 5 6 7 8 
8 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 8 
8 7 6 5 4 3 2 1 
1 2 3 4 5 6 7 8 
*/
}