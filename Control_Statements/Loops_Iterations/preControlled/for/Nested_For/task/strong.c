// 


#include<stdio.h>
int main()
{   
    int n,m,r,c,f,s=0;
    printf("Enter a number ");
    scanf("%d",&n);

    for(m=n; m!=0; m/=10)
    {
        for(f=1,r=m%10; r>1; r--)
        {
                f=f*r;
        }
        s=s+f;
    }
    puts(s==n ? "Strong number" : "Not a Strong Number");

}