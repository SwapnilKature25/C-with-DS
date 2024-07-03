/*

Enter the Number 5

* * * * * * * * *
  *           *
    *       *
      *   *
        * 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);
    int temp=n;
    for(int i=1; i<=n; i++)
    {
        for(int sp=1; sp<i; sp++)
        {
                printf("  ");
        }
        for(int j=1; j<=(temp*2)-1; j++)
        {
            if(i==1 || j==1 || j==((temp*2)-1) || i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        temp--;
        printf("\n");
    }

}


/*

Enter the Number 5

* * * * * * * * *
  *           *
    *       *
      *   *
        * 
*/