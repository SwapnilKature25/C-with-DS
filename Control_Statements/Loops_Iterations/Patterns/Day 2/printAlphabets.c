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
            // printf("%3c",64+c);
            printf("%3c",96+c);
        }
        printf("\n");
    }

/*
 A B C D E F G H I J
 A B C D E F G H I J
 A B C D E F G H I J
 A B C D E F G H I J
 A B C D E F G H I J
 A B C D E F G H I J





Enter no. of rows and columns 7 26
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z




*/
}