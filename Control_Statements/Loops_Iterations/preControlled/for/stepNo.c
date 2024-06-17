// Eg: Finding step no.
// 1234, 4321

#include<stdio.h>
int main()
{
        
        int n,r1,r2;
        printf("Enter the Number ");        //123 
        scanf("%d",&n);
        r1=n%10;
        n=n/10;

        while(n!=0)
        {
            r2=n%10;
            if(r1-r2==1 || r2-r1==1)  r1=r2;
            else { printf("Not a Step No. "); return;  }
            n=n/10;
        }
        printf("Step No. ");

        // Enter the Number -54321 
        // Step No. 
}