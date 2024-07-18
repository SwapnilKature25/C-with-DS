#include<stdio.h>
int largestNum()
{
    int a[100],size,i,max=-9,min=9;
    printf("Enter array size : ");
    scanf("%d",&size);  
    printf("Enter %d elements : ",size);  
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        if(max<a[i])    max=a[i];
    }
    return max;
}
int main()
{
    int m=largestNum();
    printf("The largest element is : %d",m);
}


/*
Enter array size : 6
Enter 6 elements : 21 34 53 76 12 99
The largest element is : 99
*/


#include<stdio.h>
#include<math.h>
int armstrongNum()
{
    int i,c,r,rem,n,m,s,j;
    for(i=100; i<10000; i++)
    {
        for(j=i; j!=0; )
        {
            n=j, c=0;
             printf("%d",n);
            while(n!=0)
            {
                c++;
                r=n%10;
                n/=10;            
            }
            rem=0,s=0, m=j;
             printf("%d",m);
            while(m>0)
            {
                rem=m%10;
                s=s+pow(rem,c);
                printf("%d",s);
                m/=10;
            }
            if(j==s)    printf("%d",i);
        }
    }
}
int main()
{

}