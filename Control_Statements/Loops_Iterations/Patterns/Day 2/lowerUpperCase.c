 #include<stdio.h>
int main()
{   
    int n,r,c,a,nr,nc,ch;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);


    // for(r=1; r<=nr; r++)
    // {
    //     char l='a', u='A';
    //     for(c=1; c<=nc; c++)
    //     {
    //         if(r%2==0)  printf("%3c",l++);
    //         else  printf("%3c",u++);
    //     }
    //     printf("\n");
    //     // if(r%2==0) l++; else u++;
    // }

/*
Enter no. of rows and columns 10 10
  A  B  C  D  E  F  G  H  I  J
  a  b  c  d  e  f  g  h  i  j
  A  B  C  D  E  F  G  H  I  J
  a  b  c  d  e  f  g  h  i  j
  A  B  C  D  E  F  G  H  I  J
  a  b  c  d  e  f  g  h  i  j
  A  B  C  D  E  F  G  H  I  J
  a  b  c  d  e  f  g  h  i  j
  A  B  C  D  E  F  G  H  I  J
  a  b  c  d  e  f  g  h  i  j
*/


    for(r=1; r<=nr; r++)
    {
        char l='a', u='A';
        if(r%2==0) ch='a'; else ch='A';
        for(c=1; c<=nc; c++)
        {
            printf("%3c",ch++);
        }
        printf("\n");
    }


/*
Enter no. of rows and columns 10 26
  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
  a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z

*/
}