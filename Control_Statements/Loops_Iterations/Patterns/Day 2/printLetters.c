 #include<stdio.h>
int main()
{   
    int n,r,c,a,nr,nc;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);
    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            // if you wanna print ssame values in column then print row in column loop.
            // printf("%3c",96+r);
            printf("%3c",64+r);
        }
        printf("\n");
    }

/*
Enter no. of rows and columns 10 10
  a  a  a  a  a  a  a  a  a  a
  b  b  b  b  b  b  b  b  b  b
  c  c  c  c  c  c  c  c  c  c
  d  d  d  d  d  d  d  d  d  d
  e  e  e  e  e  e  e  e  e  e
  f  f  f  f  f  f  f  f  f  f
  g  g  g  g  g  g  g  g  g  g
  h  h  h  h  h  h  h  h  h  h
  i  i  i  i  i  i  i  i  i  i
  j  j  j  j  j  j  j  j  j  j





Enter no. of rows and columns 10 10
  A  A  A  A  A  A  A  A  A  A
  B  B  B  B  B  B  B  B  B  B
  C  C  C  C  C  C  C  C  C  C
  D  D  D  D  D  D  D  D  D  D
  E  E  E  E  E  E  E  E  E  E
  F  F  F  F  F  F  F  F  F  F
  G  G  G  G  G  G  G  G  G  G
  H  H  H  H  H  H  H  H  H  H
  I  I  I  I  I  I  I  I  I  I
  J  J  J  J  J  J  J  J  J  J


*/
}