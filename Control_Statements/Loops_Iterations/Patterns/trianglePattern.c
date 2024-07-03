// #include<stdio.h>
// int main()
// {
//     // 5 9
//     int r,c,n;
//     char ch='A';
//     printf("Enter a Numbers : ");
//     scanf("%d",&n);
//     for(r=1; r<=n; r++)
//     {
//         for(c=1; c<=n-r; c++)
//         {
//             printf(" ");
//         }
//         for(int k=1; c<=2*r-1; c++)
//         {
//              printf("%c ",ch++);
//         }
//         printf("\n");
         
//     }
// }



// #include<stdio.h>
// int main()
// {
//  int r,n;
//  printf("Enter a Numbers : ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++)
//  {  
//     for(int s=1;s<=n-i;s++)
//     {
//            printf("  ");
//     }
//     char ch='A';
//     for(int j=1;j<=2*i-1;j++)
//     {
       
//        printf("%c ",ch++);
//     }
//       printf("\n");
//  }
// }



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