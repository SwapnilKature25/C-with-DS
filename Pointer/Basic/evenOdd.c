#include<stdio.h>
int main()
{
    int n,*p;
    p=&n;
    printf("Enter n val ");
    scanf("%d",&n);
    puts((n%2)? "even" : "Even");
    puts((*p%2)? "even" : "Even");
}
/*
Enter n val 4
Even
Even
*/