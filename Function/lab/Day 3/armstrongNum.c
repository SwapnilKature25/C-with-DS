 #include<stdio.h>
#include<math.h>
void armstrongNum()
{
    int i,c,r,rem,n,m,s,j;
    printf("Armstrong numbers between 100 and 10000 are : \n");
    for(i=100; i<10000; i++)
    {
           n=i, c=0;
            while(n!=0)
            {
                c++;
                r=n%10;
                n/=10;            
            }
            rem=0,s=0, m=i;
            while(m>0)
            {
                rem=m%10;
                s=s+pow(rem,c);
                m/=10;
            }
            if(i==s)    printf("%5d\n",i);
    }
}
int main()
{
    armstrongNum();
}


/*
Armstrong numbers between 100 and 10000 are : 
  370
  371
  407
 1634
 8208
 9474
*/