/*
Size of the array : 4
1
4
2
1
Sum of elements in the array : 8
*/

 #include<stdio.h>
int sumArr(int a[],int n)
{
     /*
    //  to find out array length
     int a[]={10,20,20,30,40};
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d",len);

    int len=sizeof(a)/sizeof(int);
    printf("%d",len);
    */
   int s=0;
     for(int i=0; i<n; i++)
    {
         scanf("%d",&a[i]);
    }
     for(int i=0; i<n; i++)
     {
         s+=a[i];
     }
    return s;
}
int main()
{
     int i,n,s;
    printf("Size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Sum of elements in the array : %d",sumArr(a,n));

}