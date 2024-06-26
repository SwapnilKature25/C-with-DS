#include<stdio.h>
int main()
{
    int nr,nc,r,c,x=1;
    scanf("%d",&nr);
    scanf("%d",&nc);

    // for(r=1; r<=nr; r++)
    // {
    //     for(c=1; c<=nc; c++)
    //     {
    //         if(r%2==1) 
    //         {
    //              printf("%2d ",x++);
    //         }
    //         else {
    //              printf("%2d ",x--);
    //         }
    //     }
    //     printf("\n");
    //     x+=nc;
    //     if(r%2==1)  x--;  
    //     else x++;


    int b,a=1;

    for(r=1; r<=nr; r++)
    {
        b=r*(c-1);
        for(c=1; c<=nc; c++,a++)
        {
            if(r%2==0) 
            {
                 printf("%2d ",b--);
            }
            else {
                 printf("%2d ",a);
            }
        }
        printf("\n");
    }
}