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
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        //   if(a[i]>a[j])      //for Ascending order
          if(a[i]<a[j])         //for Descending order
          {
            int t=a[i];
            a[i]=a[j];
            a[j]=t; 
          }
        }
        printf("%d ",a[i]);
        
    }
}