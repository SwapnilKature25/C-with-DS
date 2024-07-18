 #include<stdio.h>
void swapArray(int n)
{
    int a1[100], a2[100],i,temp;
    printf("Enter %d elements for 1st array : ",n);
    for(i=0; i<n; i++) scanf("%d",&a1[i]);
    
    printf("Enter %d elements for 2nd array : ",n);
    for(i=0; i<n; i++)  scanf("%d",&a2[i]);

    for(i=0; i<n; i++)
    {
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
    }
    printf("After Swapping : \n");
    printf("1st Array : ");
    for(i=0; i<n; i++)  printf("%d ",a1[i]);
    printf("\n2nd Array : ");
    for(i=0; i<n; i++)  printf("%d ",a2[i]);

}
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    swapArray(n);
}


/*
Enter array size 4
Enter 4 elements for 1st array : 1 2 3 4
Enter 4 elements for 2nd array : 5 6 7 8
After Swapping :
1st Array : 5 6 7 8
2nd Array : 1 2 3 4
*/