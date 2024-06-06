#include<stdio.h>
void main(){

    int m;
    printf("Enter Month number : ");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)  puts("31 Days");
    else if(m==4 || m==6 || m==9 || m==11)  puts("30 Days");
    else  if(m==2)  puts("28/29 Days");
    else  puts("Invalid month no. ");
    
    /*
    Enter Month number : 23
    Invalid month no.

    Enter Month number : 2
    28/29 Days
    */

}