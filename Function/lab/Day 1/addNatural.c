
/*
Input n value : 10
The sum of 10 natural numbers is 55
*/
#include<stdio.h>
int sumOfNatural(int n)
{
    // By using for loop
    // int i,s=0;
    // for(i=1; i<=n; i++)
    // {
    //     s+=i;
    // }

    // By using formula
    int s=n*(n+1)/2;
    return s;
}
int main()
{
    int g;
    printf("Input n value : ");
    scanf("%d",&g);
    int sum=sumOfNatural(g);
    printf("The sum of %d natural numbers is %d",g,sum);
}