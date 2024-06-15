// No to text conversion:

#include<stdio.h>
int main()
{
        long m,n,rev=0;
        int r;
        printf("Enter the Value ");         //102
        scanf("%ld",&n);

        if(n<0)     printf("-",n=-n);           
        m=n;
        // First reverse the number before converting to text
        while(m!=0){  r=m%10;  rev=rev*10+r;   m=m/10;  }       //201

        do{
            switch(rev%10)          //1
            {
                case 0: printf("Zero"); break;
                case 1: printf("One"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("Four"); break;
                case 5: printf("Five"); break;
                case 6: printf("Six"); break;
                case 7: printf("Seven"); break;
                case 8: printf("Eight"); break;
                case 9: printf("Nine"); break;

            }
            rev=rev/10;
            printf(" ");
        }while(rev!=0);

        while(n%10==0 && n!=0)  printf("Zero ",n=n/10);



        /*
        
        Enter the Value -121
        -One two One
        

        Enter the Value 100
        One Zero Zero 

        

        */


}