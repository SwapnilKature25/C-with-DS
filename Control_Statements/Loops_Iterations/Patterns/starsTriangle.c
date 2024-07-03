/*
Enter the Number 5
        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);     //5

    for(int i=1; i<=n; i++) //1 //2
    {
        for(int sp=1; sp<=n-i; sp++)        
        {
            printf("  ");
        }

        for(int j=1; j<=2*i-1; j++) //2*1-1=1
        {
            if(i==n || j==1 || j==2*i-1)
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
           
        }
        printf("\n");
    }

/*
Enter the Number 5
        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/

}