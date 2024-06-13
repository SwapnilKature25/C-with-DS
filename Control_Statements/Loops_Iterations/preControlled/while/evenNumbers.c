#include<stdio.h>
int main()
{
        int i=0, n;
        printf("Enter n Value ");
        scanf("%d",&n);

    //    while(i<(n-1)) {
    //     printf("%d ",i+=2);
    //    }
    //    2 4

    // while(i<=n) {
    //     if(i%2==0)  printf("%4d ",i+=2);
    //     }

    i=-1;
    // while(i<=n-1) {
    //     if(i%2!=0)  printf("%4d ",i,i+=2);
    //     }


    //  while(i<=n-1)  printf("%4d ",i,i+=2);
     // i+=2 ==> -1+2 => 1+2=>3+2=>5,....

    i=1;
     while(i<=n) {
        if(i%2==0)  printf("%4d ",i++);
        }


}