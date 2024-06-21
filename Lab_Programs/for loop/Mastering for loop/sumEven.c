

#include<stdio.h>
int main()
{
        int n,sum=0;
        printf("Enter a Number ");
        scanf("%d",&n); 
        printf("The even numbers are : ");
        for(int i=1; i<=n*2; i++)
        {
            if(i%2==0)
            {
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("\nThe Sum of even Natural Number upto %d terms : %d",n,sum);

}