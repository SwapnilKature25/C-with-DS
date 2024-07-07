/*
3).Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.
For example: 
given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]
Expected output:
1 2 4 5 3 0 0 0 0


o/p :
 Input the size of array : 7 
 Input 7 elements in the array : 1 0 0 0 3 4 0
  1  3  4  0  0  0  0
*/

#include <stdio.h>

int main() {
    // Write C code here
    int i,n,t,k=0;
    printf(" Input the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Input %d elements in the array :",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        if(a[i]!=0){        //
            t=a[i];
            a[i]=a[k];
            a[k]=t;
            k++;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }

}