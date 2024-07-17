#include<stdio.h>
// int prime(int n,int i)      //5 2
// {
//     if(i==1)    return 1;
//     else if(n%i==0)  return 0;      
//     else prime(n,--i);          //5,1
// }
// int main()
// {
//     int n;
//     printf("Enter a value ");
//     scanf("%d",&n);
//     puts(prime(n,n/2) ? "prime" : "composite");
// }

// Enter a value 5
// prime


int i=1, c=0;
int prime(int n)
{
    if(n%i==0)  
    {
        c++;
        i++;
        prime(n);
    }
    if(c==2)  return 1; 
    else return 0;
}
int main()
{
    int n;
    printf("enter a value ");
    scanf("%d",&n);
    if(prime(n)) puts("Prime");
    else puts("Not a Prime");
}