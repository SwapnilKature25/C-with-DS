// Eg: printing 1..n prime no’s and count

#include<stdio.h>
int main()
{   
    int n,i,j,r,c,count=0;
    printf("Enter a number ");
    scanf("%d",&n);

    for( i=2; i<=n; i++)
    {
        for(j=1, c=0;j<=i; j++)
        {
            if(i%j==0)  c++;    //
             //
        }
        
        if(c==2)    printf("%4d",i,count++);
    }
    printf("\n%d prime numbers",count);
     

}