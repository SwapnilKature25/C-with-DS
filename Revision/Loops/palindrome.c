/*
Enter a num 121
Palindrome
*/
#include<stdio.h>
int main()
{
    int r,n,m,rev=0;
    printf("Enter a num ");         //121
    scanf("%d",&n); 
    m=n;
    while(m!=0)
    {
        r=m%10;         //1  //2  //1
        rev=rev*10+r;       //0*10+1=1  // 1*10+2=12    //12*10+1=121
        m=m/10;         //12    //1
    }
    puts(n==rev ? "Palindrome" : "Not a Palindrome");
    // do{
    //     r=m%100;  
    //     if(m>9 && r<10)  printf("0");       
    //     printf("%d ",r);
    //     m=m/100;  
    // }while(m!=0);
    
}

/*
Enter a num 100002
02 00 10
*/