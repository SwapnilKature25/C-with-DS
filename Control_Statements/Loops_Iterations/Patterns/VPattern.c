/*
*       * 
 *     *  
  *   *   
   * *    
    *     
*/

#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n*2; c++)
        {
            // if(r==c || r+c==10)
            if(r==c || c==((n*2)-r))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}