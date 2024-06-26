// Direct initialization of array elements:

#include<stdio.h>
int main()
{
    
    // int a[4]={9,3,1,8};
    // int a[]={9,3,1,8};
    // for(int i=0; i<4; i++)
    // {
    //     // printf("%4d",a[i]);
    //     printf("%4d",i[a]);          we use either a[i] or i[a]
    // }
    //  9   3   1   8


// after 9 all are garbage value
    // int b[]={9};        // 9    1 4194432 6422288 
    int b[4]={9};       //9    0    0    0 
    for(int i=0; i<4; i++)
    {
        printf("%4d ",i[b]);
    }
     
}
