#include<stdio.h>
int power(int b,int p)
{
    if(p!=0) return b*power(b,p-1);
    else return 1;
}
int main()
{
    int b,p;
    printf("enter base,power values ");
    scanf("%d %d",&b,&p);
    printf("%d ^ %d = %ld\n",b,p,power(b,p));
}

// enter base,power values 2 5
// 2 ^ 5 = 32