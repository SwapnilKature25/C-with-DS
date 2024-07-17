/*
Enter a no 8
Factorial = 40320
*/
#include<stdio.h>
long fact(int n)
{
    long f=1;
    // using for loop
    // for(int i=n; i>1; i--)
    // {
    //     f=f*i;
    // }

    // using while loop
    while(n>1)
    {
        f=f*n--;
    }
    return f;
}
void main()
{
    int n;
    printf("Enter a no ");
    scanf("%d",&n);
    printf("Factorial = %ld",fact(n));
}


/*
Enter a no 8
Factorial = 40320
*/