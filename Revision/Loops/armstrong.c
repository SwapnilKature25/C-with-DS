
#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n,c=0,m,s=1,r,sum=0;
    printf("Enter a no. ");
    scanf("%d",&m);
    n=m;
    if(n>0 && n<=9) printf("Armstrong no. is %d\n",n);
    else  
    {
        while(n!=0)
        {
        c++;
        n/=10;
        }
    n=m;
    while(n!=0)
    {
        r=n%10; //3
        sum=sum+pow(r,c);
        n/=10;
    }
    if(m==sum) printf("It is a Armstrong no");
    else printf("not a Armstrong no");
    }
    

}