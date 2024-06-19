// Eg: printing 1..n palindrome no’s and count

#include<stdio.h>
#include<math.h>
int main()
{
        
        int n,r=0,sum=0,c=0;
        printf("Enter the Value ");        
        scanf("%d",&n);

        for(int i=1; i<n; i++)
        {
            while(n!=0)
            {
                r=n%10;
                sum=sum*10+r;
                n=n/10;
                c++;
            }
            printf("%d ",n);
        }
}