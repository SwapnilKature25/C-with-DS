#include <stdio.h>

int main() {
   int n=5;
   for(int i=1;i<=n;i++)
   {
       for(int sp=1;sp<=n-i;sp++)
       {
           printf("  ");
       }
       int x=65;
       for(int j=1;j<=2*i-1;j++)
       {
        // here i is for last row,  j is for first slope and 2nd j for second slope
           if( i==n ||j==1 || j==2*i-1)
           {
               printf("%c ",x);
           }else
           {
               printf("  ");
           }
           x++;
           
       }
       printf("\n");
   }
}


/*
        A 
      A   C 
    A       E 
  A           G 
A B C D E F G H I 
*/