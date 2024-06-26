
#include<stdio.h>
int main()
{   
    int n,nr,r,c,a=1,b;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);
    for(r=1; r<=nr; r++)
    {
        b=a+r-1;
        for(c=1; c<=r; c++,a++)
        {
            if(r%2==0)    printf("%3d ",b--);
            else printf("%3d ",a);
        }
        printf("\n");
    }
}

/*
Enter no. of rows  4
  1
  3   2
  4   5   6
 10   9   8   7
 
*/