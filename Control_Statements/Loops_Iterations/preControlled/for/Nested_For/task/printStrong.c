// printing 1...n strong numbers
#include<stdio.h>
int main()
{   
    long int n,a,m,r,f,s;
    printf("Enter a number ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        for(m=a, s=0; m!=0; m=m/10)
        {
            for(f=1,r=m%10; r>1; r--)
            {
                f=f*r;
            }
            s=s+f;
        }
        if(a==s)   printf("%8ld",a);
    }

}