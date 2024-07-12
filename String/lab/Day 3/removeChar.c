/*
================================
 remove given character from a String.

Write a C program to remove given character from a String.

Input as : 
Enter a String : Bookstore
Enter the character you want to remove : o
Expected Output : 
Resulting String is : Bkstre

========================================================================

o/p :
Enter a String Swapnil Kature 
Enter the Character you want to remove a
Swpnil Kture 


*/
#include<stdio.h>
int main()
{
    char s[20],c;
    int i,n;
    printf("Enter a String ");
    gets(s);
    printf("Enter the Character you want to remove ");
    scanf(" %c",&c);
    for(i=0; s[i]!='\0'; i++);
    n=i;
    
    for(i=0; i<n; i++)
    {
        if(s[i]==c){
            continue;
            n--;
        }
        else  printf("%c",s[i]); 
    }
}

/*
Enter a String software developer
Enter the Character you want to remove e
softwar dvlopr
*/