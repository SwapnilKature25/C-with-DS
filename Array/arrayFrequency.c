/*
Enter no. of Elements [1-100] 6
Enter 6 Elements 3 2 1 3 4 2 
3 found 2 times
2 found 1 times
1 found 1 times
4 found 1 times
2 found 1 times
*/
#include<stdio.h>
int main()
{
    int a[100],b[100]={0},n,i,j,k,t,c;
    printf("Enter no. of Elements [1-100] ");
    scanf("%d",&n);
    printf("Enter %d Elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(b[i]!=-1)
        {
            for(c=1,j=j+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                    b[j]=-1;
                }
            }
            b[i]=c;
        }
    }
    for(i=0; i<n; i++)  if(b[i]!=-1)  printf("%d found %d times\n",a[i],b[i]);

}