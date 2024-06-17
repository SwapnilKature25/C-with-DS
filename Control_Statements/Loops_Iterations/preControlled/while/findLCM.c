// Finding LCM of given two numbers
// Using GCD 
// Without GCD

#include<stdio.h>
int main()
{
        /*
        int i=1,a,b,gcd;
        printf("Enter a,b Value ");         //
        scanf("%d %d",&a,&b);

        while(i<=a && i<=b)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
            i++;
        }  
        printf("LCM=%d",a*b/gcd);  

         
        // Enter a,b Value 4 6
        // LCM=12

        */


        // Finding lcm of given two numbers:
        // without using gcd :


        int a,b,max;
        printf("Enter a,b Value ");         //
        scanf("%d %d",&a,&b);

        max = a>b ? a : b;
        while(1)
        {
            if(max%a==0 && max%b==0)
            {
                printf("LCM=%d",max);
                break;
            }
            max++;
        }

        // Enter a,b Value 4 6
        // LCM=12

        // Enter a,b Value 7 5
        // LCM=35

        

        

        
    


}