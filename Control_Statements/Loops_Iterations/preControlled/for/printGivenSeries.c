
/*
Printing below series:
N=10
1 2 3 9 4 5 6 18 7 8 9 27 10
      3*3     6*3      9*3


*/

#include<stdio.h>
#include<math.h>
int main()
{
        
        int n,i;
        printf("Enter the Value ");       
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            printf("%4d",i);
            if(i%3==0)  printf("%4d",i*3);
        }
}