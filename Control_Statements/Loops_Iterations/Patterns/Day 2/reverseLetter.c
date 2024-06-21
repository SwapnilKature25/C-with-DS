#include<stdio.h>
int main()
{   
    int n,r,c,a,nr,nc;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);
    char ch='A';
    for(r=1; r<=nr; r++)
    {   
        for(c=1; c<=nc; c++)
        {
            if(r%2==0)  printf("%3c",--ch);
            else printf("%3c",ch++);
        }
        printf("\n");
    }


/*
Enter no. of rows and columns 10 10
  A  B  C  D  E  F  G  H  I  J
  J  I  H  G  F  E  D  C  B  A
  A  B  C  D  E  F  G  H  I  J
  J  I  H  G  F  E  D  C  B  A
  A  B  C  D  E  F  G  H  I  J
  J  I  H  G  F  E  D  C  B  A
  A  B  C  D  E  F  G  H  I  J
  J  I  H  G  F  E  D  C  B  A
  A  B  C  D  E  F  G  H  I  J
  J  I  H  G  F  E  D  C  B  A

*/
}