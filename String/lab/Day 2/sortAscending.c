/*
Enter a String CoreJava
CJaaeorv            --> here capital has more priority than small ones

Enter a String CoreJava
vroeaaJC
*/

#include<stdio.h>
int main()
{
    char s[50];
    int i,j,t;
    printf("Enter a String ");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
         for(j=i+1; s[j]!='\0'; j++)
         {
            // if(s[i]>s[j])
            if(s[i]<s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
         }
    }
    printf("%s",s);

}
