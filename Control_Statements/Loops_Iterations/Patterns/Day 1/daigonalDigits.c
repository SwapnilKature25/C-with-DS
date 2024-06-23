/*
Enter no. of rows 3
  1(1,1)  0       0
  2(2,1)  1(2,2)  0
  2(3,1)  2(3,2)  1(3,3)
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
            if(c==r) printf("%3d",1);
            else  if(r>c)   printf("%3d",2);
            else  printf("%3d",0);
        }
        printf("\n");
    }


/*

Enter no. of rows 3
  1  0  0
  2  1  0
  2  2  1
*/
}