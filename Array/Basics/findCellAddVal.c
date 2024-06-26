// Finding array cell no, address and value:

#include<stdio.h>
int main()
{
    // int a[4]={9,3,1,8},i;
    float a[4]={9,3,1,8};
    for(int i=0; i<4; i++)
    {
        printf("a[%d] cell addr= %u, values=%.2f\n",i,&a[i],a[i]);
    }
}

/*
diff is of 4 bytes  - int
a[0] cell addr= 6422284, values=9
a[1] cell addr= 6422288, values=3
a[2] cell addr= 6422292, values=1
a[3] cell addr= 6422296, values=8
*/

/*
diff is of 4 bytes  - float
a[0] cell addr= 6422284, values=9.00
a[1] cell addr= 6422288, values=3.00
a[2] cell addr= 6422292, values=1.00
a[3] cell addr= 6422296, values=8.00
*/