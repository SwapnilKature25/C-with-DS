#include<stdio.h>
#include<math.h>

int main()
{
         int i=1,b,p;
         long r=1,s=0;
        printf("Enter base and power Value ");
        scanf("%d%d",&b,&p);

        // Finding power without using pow():

        // while(i<=p){
        //     r=r*b;
        //     i++;
        // }

        while(p>=i){
            r=r*b;
            p--;
        }
        printf("Power is %ld\n",r);


       // Find the powers sum:

      while(p>=1) {
            r=r*b;
            s=s+r;
            p--;

      }
      printf("Power Sum : %ld",s);


// ///////////////////////////////////////////

      while(p>=1) {
             s=s+pow(b,p);
            p--;

      }
      printf("Power Sum : %ld",s);


}