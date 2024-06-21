#include<stdio.h>
int main()
{   
    int n,r,c,a,nr,nc,ch;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);
    for(r=1; r<=nr; r++)
    {
        char l='a', u='A';
        for(c=1; c<=nc; c++)
        {
            if(c%2==0)  printf("%3c",l++);
            else  printf("%3c",u++);
        }
        printf("\n");
    }

/*
Enter no. of rows and columns 10 10
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e
  A  a  B  b  C  c  D  d  E  e

*/
}