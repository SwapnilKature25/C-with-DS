#include<stdio.h>
#define n 4     /* Macro */
int main()
{
    int a[n]={1,2,3},i;
    printf("Elements are ");
    for(int i=0; i<4; i++)
    {
        printf("%3d ",a[i]);        //Elements are   1   2   3   0
    }
}