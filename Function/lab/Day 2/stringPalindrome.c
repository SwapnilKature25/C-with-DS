#include<stdio.h>
#include<string.h>
int isPali(char s[10])
{
   int i,n,j;
   char s2[10],s3[10];
   strcpy(s2,s);
   for(i=0; s[i]!='\0'; i++);
   n=i;
   for(i=0; i<n/2; i++)
   {
      char temp=s[i];
      s[i]=s[n-i-1];
      s[n-i-1]=temp;
   }
   if(strcmp(s2,s)==0) return 1; 
   else return 0;
   
}
int main()
{
    char st[10];
   //  printf("Enter a String ");
    scanf("%s",st);
    int a=isPali(st);
    if(a)   printf("Palindrome");
    else printf("Not a Palindrome");
}