#include<stdio.h>
int main()
{
    int r,c,nr,nc,i,a=1;
    printf("Enter a row and col ");
    scanf("%d%d",&nr,&nc);

    for(r=1; r<=nr; r++)
    {
        a=r;
        for(c=1; c<=nc; c++,a++)
        {
            if(c>=r)
            {
                printf("%d ",a);
            }
            else  printf("0 ");
        }
        printf("\n");
    }
}