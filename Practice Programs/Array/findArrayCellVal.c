#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    for(int i=0; i<3; i++)
    {
        printf("a[%d] cell add=%u, value=%d\n",i,&a[i],a[i]);
    }
}
/*
a[0] cell add=6422288, value=1
a[1] cell add=6422292, value=2
a[2] cell add=6422296, value=3
*/