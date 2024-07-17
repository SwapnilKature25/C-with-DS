/*
Enter a Number 5
The number 5 is a prime number.
*/
#include<stdio.h>
int findPrime(int n)
{
    int c,i;
    for(c=0, i=n; i>0; i--)
    {
        if(n%i==0)  c++;
    }
    if(c==2)    return 1;
    else return 0;
}
int main()
{
    int a;
    printf("Enter a Number ");
    scanf("%d",&a);
    int p=findPrime(a);
    if(p==1)  printf("The number %d is a prime number.",a);
    else printf("The number %d is not a prime number.",a);
  
}
