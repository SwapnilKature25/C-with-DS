// Printing lower upper rowwise

#include<stdio.h>
int main()
{   
    int n,nr,nc,r,c,a=1;
    char l='a', u='A';
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            if(r%2==0)  printf("%c ",l);
            else printf("%c ",u);
        }
        printf("\n");
        if(r%2==0)  l++;
        else u++;
    }
}



/*
A A A A A A A A A A
a a a a a a a a a a
B B B B B B B B B B
b b b b b b b b b b
C C C C C C C C C C
c c c c c c c c c c
D D D D D D D D D D
d d d d d d d d d d
E E E E E E E E E E
e e e e e e e e e e
*/