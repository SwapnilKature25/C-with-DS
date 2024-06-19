#include<stdio.h>
int main()
{       
        long int n,i,c=0;
        printf("Enter the Number ");        
        scanf("%d",&n);
        // 1 factor is 1 only
        if(n==1)    printf("Not a Prime/Composite Number");  
        else {
            
        // for( i=1; i<=n; i++)
        // {
        //     if(n%i==0)  c++;
        // }
        // puts (c==2 ? "Prime Number" : "Composite Number");  
        // }

        // Enter the Number 3
        // Prime Number


        for( i=2; i<=n/2; i++)
        {
            if(n%i==0)  {
                puts("Composite Number");
                return 0;
            }
        }
        puts("Prime Number");
        }

        // Enter the Number 2
        // Prime Number
}