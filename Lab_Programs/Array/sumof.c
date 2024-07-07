/*
1).Write a C program that finds pairs in an array whose sum is 15.
Test Data :
Input the size of array : 12
Input 8 elements in the array :
2 4 6 7 8 9 10 11 12 13 14 16

o/p :
Input the size of array : 12
 Input 12 elements in the array :2 4 6 7 8 9 10 11 12 13 14 16
(2, 13)
(4, 11)
(6, 9)
(7, 8)
*/

#include <stdio.h>

int main() {
    // Write C code here
    int i,j,n;
    printf(" Input the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Input %d elements in the array :",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==15)   printf("(%d, %d)\n",a[i],a[j]);
        }
    }
    
    
    return 0;
}