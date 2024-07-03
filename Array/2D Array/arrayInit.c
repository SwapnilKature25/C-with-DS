/*

Elements are 
   1   0   0
   2   3   4


Elements are 
   1   0   0
   2   3   4


Elements are 
   1   0   0
   2   0   0


Elements are 
   1   2   0
   3   4   5

   
*/
#include<stdio.h>
int main()
{
    // int a[2][3]={{1},2,3,4} , r,c; 
    // int a[2][3]={{1},2,3,{4}} , r,c; 
    // int a[2][3]={{1},{2},3,4} , r,c; 
    // int a[2][3]={{1},{2},{3}} , r,c; 
    int a[2][3]={{1,2},3,4,5,6} , r,c; 

    puts("Elements are ");
    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
}