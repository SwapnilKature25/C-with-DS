/*
Elements are 
   1   0   0
   0   0   6


   Elements are 
   1  4200864  6422356
4200955  4200864     6


Elements are 
   1     2     3
   4     5     6


error: array type has incomplete element type 'int[]'
     int a[][]={1,2,3,4,5,6}, r,c;

*/
#include<stdio.h>
int main()
{
    int a[2][3]={9}, r,c; 
    // a[0][0]=1;  a[1][2]=6;

    // int a[2][3], r,c; 
    // a[0][0]=1;  a[1][2]=6;

    // int a[][]={1,2,3,4,5,6}, r,c;

    // int a[2][], r,c; 
    // a[0][0]=1;  a[1][2]=6;       error: array type has incomplete element type 'int[]'
    

     puts("Elements are ");
    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("%4d  ",a[r][c]);
        }
        printf("\n");
    }

}