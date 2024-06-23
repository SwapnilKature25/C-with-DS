// Printing lower upper columnwise

#include<stdio.h>
int main()
{   
    int n,nr,nc,r,c,a=1;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);

    for(r=1; r<=nr; r++)
    {
    char l='a', u='A';
        for(c=1; c<=nc; c++)
        {
            if(c%2==0)  printf("%c ",l++);
            else printf("%c ",u++);
        }
        printf("\n");
    }
}



/*
Enter no. of rows and columns 10 10
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
A a B b C c D d E e
*/