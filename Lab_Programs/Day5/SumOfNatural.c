#include<stdio.h>
void main(){
    int n,res;
    printf("Enter the no.");
    scanf("%d",&n);

    res=n*(n+1)/2;
    printf("The sum of natural numbers from 1 to %d is %d",n,res);
    
}