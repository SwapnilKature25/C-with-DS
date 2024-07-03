// Finding cell position, value and address:
/*
a[0][0]  value=1,  addr=6422272
a[0][1]  value=2,  addr=6422276
a[0][2]  value=3,  addr=6422280
a[1][0]  value=4,  addr=6422284
a[1][1]  value=5,  addr=6422288
a[1][2]  value=6,  addr=6422292
*/
#include<stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}} , r,c;
   
    for(r=0; r<2; r++)
    {
        for(c=0; c<3; c++)
        {
            printf("a[%d][%d]  value=%d,  addr=%u\n",r,c,a[r][c],&a[r][c]);
        }
    }

}