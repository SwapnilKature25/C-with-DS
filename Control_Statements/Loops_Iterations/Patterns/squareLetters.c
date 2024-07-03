/*
  A  B  C  D  E
  A           E
  A           E
  A           E
  A  B  C  D  E

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
      int k=65;
      for(int j=1;j<=n;j++)
      {
          if(i==1 || i==n)
          {
              printf("%3c",k++);
          }else
          {
              if(j==1 || j==n)
               
              {
                  printf("%3c",k++);
              }
              else
              {
                  printf("   ");
                  k++;
              }
          }
      }
      printf("\n");
  }

}

/*
  A  B  C  D  E
  A           E
  A           E
  A           E
  A  B  C  D  E


  Enter the Number 10
  A  B  C  D  E  F  G  H  I  J
  A                          J
  A                          J
  A                          J
  A                          J
  A                          J
  A                          J
  A                          J
  A                          J
  A  B  C  D  E  F  G  H  I  J


*/