#include<stdio.h>
int main()
{   
    int n,r,c,a,nr,nc,ch;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);
    char l='a', u='A';
    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            if(r%2==0)  printf("%3c",l);
            else  printf("%3c",u);
        }
        printf("\n");
        if(r%2==0)  l++; else u++;
    }

/*
Enter no. of rows and columns 10 10
  A  A  A  A  A  A  A  A  A  A
  a  a  a  a  a  a  a  a  a  a
  B  B  B  B  B  B  B  B  B  B
  b  b  b  b  b  b  b  b  b  b
  C  C  C  C  C  C  C  C  C  C
  c  c  c  c  c  c  c  c  c  c
  D  D  D  D  D  D  D  D  D  D
  d  d  d  d  d  d  d  d  d  d
  E  E  E  E  E  E  E  E  E  E
  e  e  e  e  e  e  e  e  e  e

*/
}