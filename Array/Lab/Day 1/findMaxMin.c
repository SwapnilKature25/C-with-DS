 #include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter the Array elements to be stored in array ");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0; i<n; i++)
    {
        if(min>a[i])    min=a[i];
        if(max<a[i])    max=a[i];
        
    }
    printf("Maximum element is : %d",max);
    printf("\nMinimum element is : %d",min);
}