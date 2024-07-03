/*
Enter the arrray size Input 4 elements in the array : The Even elements are : 
 34
 56
The Odd elements are : 
 33
 67
*/

#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the arrray size ");
    scanf("%d",&n);
    printf("Input %d elements in the array : ",n);
    for(i=0; i<n; i++)  scanf("%d",&a[i]);

     printf("The Even elements are : \n");
    for(i=0; i<n; i++)
    {
       if(a[i]%2==0)   printf(" %d\n",a[i]);
    }

    printf("The Odd elements are : \n");
    for(i=0; i<n; i++)
    {
       if(a[i]%2!=0)   printf(" %d\n",a[i]);
    }

}