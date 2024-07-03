/*
* * * * * 
*     
* * * * * 
*     
*    
*/

#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            if((r%2!=0 && r!=5 ) || c==1)  printf("* ");
            else printf(" ");
        }
        printf("\n");
    }
}