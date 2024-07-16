/*
Enter array size 9
Enter array ELements 2 3 4 5 7 8 9 10 11
sum = 28
*/
#include<stdio.h>
int main()
{
    int a[20],i,n,j,c,s=0;
    printf("Enter array size ");
    scanf("%d",&n);

    printf("Enter array ELements ");
    for(i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=a[i]; j>0; j--)
        {
            if(a[i]%j==0){
                c++;
            }  
        }
        if(c==2)     s+=a[i];
    }
    printf("sum = %d",s);
}