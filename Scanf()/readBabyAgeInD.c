// Read a baby age in years, months, weeks, and days.Find find baby age in Days.

#include<stdio.h>
void main(){
    int days,y,m,w,d;
    printf("Enter the Baby age in Years , months, weeks and Days format : \n");
    scanf("%d%d%d%d",&y,&m,&w,&d);
    days=(y*365)+ (m*30) + (w*7) + d;
    printf("\nThe Baby age is %d Days",(days));

    /*
    Enter the Baby age in Years , months, weeks and Days format : 
    1 4 2 1
    The Baby age is 500 Days
    */
}