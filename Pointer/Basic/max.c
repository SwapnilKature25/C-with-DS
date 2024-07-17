#include<stdio.h>
// int max(int *a,int *b)
int * max(int *a,int *b)
{
    // if(*a > *b)  return *a;
    //  else return *b;
    if(*a > *b)  return "a is big";
     else if(*b>*a) return "b is big";
     else return "Both were equal";
}
int main()
{
    int a,b, *p;
    printf("enter num ");
    scanf("%d%d",&a,&b);
    // printf("%d is big",max(&a,&b));    
    p=max(&a,&b);
    printf(p);    

    //enter num 2 4
    // 4 is big
}