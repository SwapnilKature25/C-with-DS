#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    printf( (n%2) ? "odd" : "even") ;
    printf("\n%d\n", 1?2?0:3:4);
    printf("%d\n", 0?2?1:3:4);
    printf("%d\n", 1?0?2:3:4);
    
    return 1;
    
    
    
}