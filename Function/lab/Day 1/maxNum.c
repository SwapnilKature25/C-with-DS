/*
Enter three positive number : 13 31 19
The biggest number is 31
*/
#include<stdio.h>

int biggestNum(int a,int b,int c)
{
    if(a==b || a==c || b==c || c==a )  printf("All are equals");
    else if(a>b && a>c) return a;
    else if(b>c && b>a) return b;
    else  return c;
}
int main()
{
    int x,y,z;
    printf("Enter three positive number : ");
    scanf("%d%d%d",&x,&y,&z);
    int n=biggestNum(x,y,z);
    printf("The biggest number is %d",n);
}

