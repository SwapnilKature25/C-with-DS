#include<stdio.h>
int main()
{
    int *p, a[3]={10,20,30},i;
    p=a;  // or p=&a  or p=&a[0]
    for(i=0; i<3; i++)
    {
        // *(p+i) => 65500+0*2=65500   => 10
        printf("%d ",*(p+i));  
        // we can access array elements in following ways : 
        // a[i]/ i[a] / i[p] / *(p+i) / *(a+i) / *(i+p) / *(i+a)
    }
    // 10 20 30 
}