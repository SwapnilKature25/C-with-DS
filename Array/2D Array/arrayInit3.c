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


     error: array size missing in 'a'
     int a[][3], r,c;



    Elements are 
   1     2     3
   4     5     6



   1     2     3
   0     1  4194432


   1     0     0
   0     1  4194432



   Elements are 
   1     2    10
  10     4     2

*/
#include<stdio.h>
int main()
{
    // int a[2][3]={9}, r,c; 
    // a[0][0]=1;  a[1][2]=6;

    // int a[2][3], r,c; 
    // a[0][0]=1;  a[1][2]=6;

    // int a[][]={1,2,3,4,5,6}, r,c;

    // int a[2][], r,c; 
    // a[0][0]=1;  a[1][2]=6;      // error: array type has incomplete element type 'int[]'
    
    // int a[][3], r,c; 
    // a[0][0]=1;  a[1][2]=6;     //error: array size missing in 'a'  int a[][3], r,c; 
    
    // int a[][3]={1,2,3,4,5,6}, r,c; 
    // a[0][0]=1;  a[1][2]=6;     
    

    // int a[][3]={1,2,3}, r,c; 
    
    // int a[][3]={1}, r,c; 
    
    int a[2][2]={1,2,3,4}, r,c; 
    a[0][2]=10; a[1][2]=60;
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