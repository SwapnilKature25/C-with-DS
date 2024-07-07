/*
2).Write a C program that prints the elements of a given array in a specific format. The program should take an array as input and display the array elements in pairs, with each pair consisting of the first and last elements, followed by the second and second-to-last elements, and so on. If the array has an odd number of elements, the middle element should be printed alone.
For example, given the array: [2, 5, 1, 6, 7, 9, 8, 3], 
the expected output should be:
2 3
5 8
1 9
6 7



For odd : 
Input 7 elements in the array : 1 2 3 4 5  6 7
1 7
2 6
3 5
 4
*/

#include <stdio.h>

int main() {
    // Write C code here
    int i,n;
    printf(" Input the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf(" Input %d elements in the array :",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);
    
    if(n%2==0)
    {
        for(i=0; i<n/2; i++)
        {
            printf("%d %d\n",a[i],a[n-i-1]);
        }
    }
    else {
        // 1st logic
        // for(i=0; i<n/2+1; i++)
        // {
        //     if(a[i]!=n/2+1)    printf("%d %d\n",a[i],a[n-i-1]);
        //     else printf(" %d \n",a[i]);
        // }
        
        // 2nd logic
        for(i=0; i<n/2; i++)
        {
            printf("%d %d\n",a[i],a[n-i-1]);
        }
        printf(" %d \n",a[i]);
    }
        
    
    return 0;
}