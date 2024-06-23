/* print repeated Digits 
  1  1  1  1
  1  1  2  2
  1  3  3  3
  4  4  4  4
*/

#include<stdio.h>
int main()
{   
    int n,r,c,a;
    printf("Enter no. of rows ");
    scanf("%d",&n);

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            if(c<=n-r)  printf("%3d",1);
            else printf("%3d",r);
        }
        printf("\n");
    }

    /*
  Enter no. of rows 4
  1  1  1  1
  1  1  2  2
  1  3  3  3
  4  4  4  4
    */
}