#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("Enter a,b values ");
    scanf("%d%d",&a,&b);
    puts((a>b)? "a is big" : (b>a) ? "b is big" : "Both are equal");
    puts((*p>*q)? "a is big" : (*q>*p) ? "b is big" : "Both are equal");

}