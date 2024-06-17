/*
Harmonic series:
n=5  1+1/1+1/2+1/3+1/4+1/5=3.28

*/
#include<stdio.h>
#include<math.h>
int main()
{
        
        int n,i,m;
        float s=1;
        printf("Enter the Value ");        
        scanf("%d",&n);
        m=n;

        // printf("1+");

        // for(i=1; i<=n; i++)
        // {
        //     printf("1/%d+",i,s=s+1.0/i);
        // }

        // printf("\b=%.2f\n",s);            //removes last + by using \b

        // Enter the Value 5
        // 1+1/1+1/2+1/3+1/4+1/5=3.28



        // without using \b in java
        s=1;
        printf("1+");
        for(i=1; i<=m; i++){

            s=s+1.0/1;
            if(i<m) printf("1/%d+",i);
            else printf("1/%d=%.2f",i,s);
        }
}