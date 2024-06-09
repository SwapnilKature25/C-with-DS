#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    
    printf( (num>0) ? "POsitive" : (num<0) ? "Negative" : "Zero") ;
    return 1;
    
    
    
}