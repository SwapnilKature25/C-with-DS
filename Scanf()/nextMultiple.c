// Read a no. and find the next multiple if the last digit is >=5. Otherwise go to previous multiple.

#include<stdio.h>
void main(){
    int n;
    printf("\nEnter the value :");
    scanf("%d", &n);

    n%10>=5 && printf("The next multiple of %d is %d",n,(n/10+1)*10) ||  printf("The next multiple of %d is %d",n,(n/10)*10);
    
    /*
    Enter the value : 23
    The next multiple of 23 is 20

    Enter the value :27
    The next multiple of 27 is 30
    */
}