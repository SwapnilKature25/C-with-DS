/*
Merging of strings [ concatenation ]:

Enter first String Swapnil
Enter second String Kature
Your name is Swapnil Kature
*/

#include<stdio.h>
int main()
{
    char s1[50],s2[50],s3[50];
    int i,j;
    printf("Enter first String ");
    gets(s1);
    printf("Enter second String ");
    gets(s2);

    for(i=0; s1[i]!='\0'; i++)  s3[i]=s1[i];
    s3[i++]=' ';
    for(j=0; s2[j]!='\0'; i++,j++)  s3[i]=s2[j];
    s3[i]='\0';
    printf("Your name is %s",s3);
}