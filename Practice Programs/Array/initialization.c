#include<stdio.h>
int main()
{
    // int a[4]={9,2,3,4},i;
    // int a[]={9,2,3,4},i;
    // int a[]={9},i;               //Elements are      9       1  4194432  6422288
    // int a[4]={9},i;               //Elements are      9      0       0       0
    // int a[4]={{1},{2},{3},{4}},i;       //Elements are   1   2   3   4 
    // int a[4]={{1},2},i;              //Elements are   1   2   0    0
    // int a[4]=9,i;                   //error: invalid initializer
    // int a[4]={1>2, 4>3, 3-1, 40000},i;      //Elements are   0   1   2 40000
    // int a[4]={1,2, ,4},i;           //error: expected expression before ',' token
    int a[4],i;         //Elements are 4200891 4200800 11212168   0

    printf("Elements are ");
    for(i=0; i<4; i++)
    {
        // printf("%3d",a[i]);     // Elements are   9  2  3  4
        // printf("%6d  ",i[a]);     //Elements are   9  2  3  4
        printf("%3d ",i[a]);     //Elements are   9  2  3  4
    }
}
