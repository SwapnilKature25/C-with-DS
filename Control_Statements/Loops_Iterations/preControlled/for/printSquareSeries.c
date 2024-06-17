// Printing below series:
// n=5  12 + 22+ 32+ 42+ 52= 1 + 4 + 9 + 16 + 25 = 55

#include<stdio.h>
#include<math.h>
    int main()
    {
            
            int n,i,s=0;
            printf("Enter the Value ");       
            scanf("%d",&n);

            for(i=1; i<=n; i++)
            {
                printf("%d%c+",i,253,s=s+i*i);
            }
            printf("\b=%d",s);
    }


    // Enter the Value 5
// 1²+2²+3²+4²+5²=55