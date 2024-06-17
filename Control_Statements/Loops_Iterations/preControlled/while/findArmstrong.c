/*

Finding Armstrong no or not?
1 to 9 , 153, 370, 371, 407, 1634, 8208,....

1 is a single digit no => 1^1= 1
9 is a single digit no => 9^1= 9
153 is a 3 digit no => 1^3+5^3+3^3=1+125+27=153
8208 is a 4 digit no => 8^4+2^4+0^4+8^4=8208
*/

#include<stdio.h>
#include<math.h>
int main()
{
        
        int n,count=0,m,r,sum=0;
        printf("Enter the Value ");        //123 
        scanf("%d",&n);
        m=n;
        while(m) {
            count++;            //1         2       3
            m=m/10;         //123/10=12  => 12/10=1 => 1/10=0
        }
        m=n;
        while(m!=0){
                r=m%10;
                sum=sum+pow(r,count);
                m=m/10;                
        }
        printf("%s",n==sum ? "Armstrong" : "Not a Armstrong");

        // Enter the Value 9    153
        // Armstrong




}