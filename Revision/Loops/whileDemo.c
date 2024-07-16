#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n,e,o=0,s,p,sum=0;
    printf("Enter a no. ");
    scanf("%d",&n);
    printf("Enter a no. ");
    scanf("%d",&p);
    // while(i<=n)
    // {
    //     s+=i;
    //     i++;
    // }
    // printf("Sum = %d, Mean = %.2f",s,(float)s/n);

    // s=n* (n+1)/2;        without loop even sum


    // while(p>=1)
    // {
    //     s=s*n;
    //     p--;
    // }
    // printf("power = %d", s);

    while(p>=1)
    {
        s=s*n;
        sum=sum+s;
        // sum=sum+pow(n,p);
        p--;
    }
    printf("power = %d", sum);










    //  while(i<=n)
    // {
    //     if(i%2==0){
    //         e+=i;
    //     }
    //     else  { o+=i; }
    //     i++;
    // }
    // printf("Even sum=%d, Odd sum=%d\n",e,o);
}