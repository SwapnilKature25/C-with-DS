// Read n elements into array and find the elements sum and avg.

#include<stdio.h>
int main()
{
    float a[100],n,s=0;
    printf("Enter array Size between 1-100 ");
    scanf("%f",&n);

    printf("Enter %d elements ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
        s+=a[i];
    }
    printf("Elements sum=%.2f, Avg=%.2f",s,s/n);
}

/*
Enter array Size between 1-100 4
Enter 4 elements 1.1 2.2 3.3 4.4
Elements sum=11.00, Avg=2.75
*/