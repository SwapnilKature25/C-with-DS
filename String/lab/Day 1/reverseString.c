/*
Write a C program to print the reverse of a given String 
Input as :
Enter a String : NareshIT

Output as : 
The reverse of the String is : TIhseraN


Enter a String swap
The reverse of the String is : paws

*/

#include<stdio.h>
int main()
{
    char str[50],n,i,t;
    printf("Enter a String ");
    scanf("%s",str);

    for(i=0; i<str[i]!='\0'; i++);
    n=i;
    printf("The reverse of the String is : ");
    for(i=n-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }


    // gets(str);

    // for(i=0; i<str[i]!='\0'; i++);
    // n=i;
    // for(i=0; i=n/2; i++);
    // {
    //     t=str[i];
    //     str[i]=str[n-i-1];
    //     str[n-i-1]=t;
    // }
    // printf("The reverse of the String is : ");
    // for(i=0; i<str[i]!='\0'; i++)
    // {
    //     printf("%c",str[i]);
    // }
    

}