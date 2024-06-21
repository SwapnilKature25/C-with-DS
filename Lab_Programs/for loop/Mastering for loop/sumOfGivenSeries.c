
#include<stdio.h>
int main()
{
        int n,s=0,sum=0;
        printf("Enter a Number ");
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            s=s*10+1;
            // printf("%d+ ",s);
            if(i==n)
            {
                printf("%d ",s);
            }
            else    printf("%d+ ",s);

            sum+=s;
        }
        printf("\nThe sum is : %d",sum);


}