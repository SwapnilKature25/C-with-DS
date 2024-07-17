/*
Enter a Number 2 4
Before Swapping : n1 = 2, n2 = 4
After Swapping : n1 = 4, n2 = 2
*/
#include<stdio.h>
void swapNum(int a,int b)
{
    printf("Before Swapping : n1 = %d, n2 = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping : n1 = %d, n2 = %d\n",a,b);
}
int main()
{
    int x,y;
    printf("Enter a Number ");
    scanf("%d%d",&x,&y);
    swapNum(x,y);
}