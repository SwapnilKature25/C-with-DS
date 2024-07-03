// Direct initialization of array elements:
/*
Elements are 
   1   2   3
   4   5   6


    if first row is empty
   Elements are 
   0   0   0
   4   5   6


   Elements are 
   1   0   0
   4   0   0


   Elements are 
   1   4   0
   0   0   0


   Elements are 
   1   2   3
   4   0   0



*/
#include<stdio.h>
int main()
{
    // int a[2][3]={{1,2,3},{4,5,6}} , r,c;     
    // int a[2][3]={{ },{4,5,6}} , r,c;        //allowed but value is 0.
    // int a[2][3]={{1},{4}} , r,c;        //allowed but value is 0.
    // int a[2][3]={1,4} , r,c;  
    int a[2][3]={1,2,3,4} , r,c;

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