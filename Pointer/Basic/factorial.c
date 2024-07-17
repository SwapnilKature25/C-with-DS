#include<stdio.h>
int main()
{
    // int n,f=1,*p;
    // p=&n;
    // printf("Enter a Number ");
    // scanf("%d",&n);
    // while(n>1)
    // {
    //     f=f*n;
    //     n--;
    // }
    // printf("Factorial = %d\n",f);

    // Enter a Number 5
// Factorial = 120



    int n,f=1,*p;
    p=&n;
    printf("Enter a Number ");
    scanf("%d",&n);
    while(*p>1)
    {
        f=f* *p;
        (*p)--;   // or --*p;

    }
    printf("Factorial = %d\n",f);
    //  Always * got less priority

    // Enter a Number 5
// Factorial = 120
}
