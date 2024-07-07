
#include <stdio.h>
int main() {
    /*
  int a[2][2]={{1,2},{3,4}};
  int b[2][2]={{5,6},{7,8}};
  
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          int sum=a[i][j]+b[i][j];
          printf("%3d",sum);
      }
      printf("\n");
  }
    */
    int a[5][5],b[5][5],i,j,n;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d",&n);
    printf("Input Elements in the first matrix : \n");
    for(i=0; i<n; i++)
    {
         for(j=0; j<n; j++)
         {
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d",&a[i][j]);
         }
    }
    printf("Input Elements in the Second matrix : \n");
    for(i=0; i<n; i++)
    {
         for(j=0; j<n; j++)
         {
            printf("element - [%d], [%d] : ",i,j);
            scanf("%d",&b[i][j]);
         }
    }



    printf("The first matrix is : \n");
    for(i=0; i<n; i++)
    {
         for(j=0; j<n; j++)
         {
            printf("%d ",a[i][j]);
         }
         printf("\n");
    }
    printf("The Second matrix is : \n");
    for(i=0; i<n; i++)
    {
         for(j=0; j<n; j++)
         {
            printf("%d ",b[i][j]);
         }
         printf("\n");
    }


    printf("The Addition of two matrix is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            // int sum=a[i][j]+ b[i][j];
            // int sum=a[i][j] - b[i][j];
            int sum=a[i][j] * b[i][j];
            printf("%3d",sum);
        }
        printf("\n");
    }
        
}


/*
Input the size of the square matrix (less than 5): 2
Input Elements in the first matrix : 
element - [0], [0] : 1
element - [0], [1] : 2
element - [1], [0] : 3
element - [1], [1] : 4
Input Elements in the Second matrix : 
element - [0], [0] : 5
element - [0], [1] : 6
element - [1], [0] : 7
element - [1], [1] : 8
The first matrix is : 
1 2 
3 4 
The Second matrix is :
5 6
7 8
The Addition of two matrix is :
 6  8
10 12
*/