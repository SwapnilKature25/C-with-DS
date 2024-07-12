/*
 Convert UpperCase : 
Write a C program to convert all the character to upper case 
from a given index to end index. If the given index is not available then print
Index is not available.
Input as :

Enter a String : I am a student
Enter the starting index number : 4
Enter the ending index number : 13
Expected output :
Resulting String is : I am A STUDENT

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,start,end,n;
    printf("Enter a String : ");
    gets(s);
    printf("Enter the Starting index number : ");
    scanf("%d",&start);
    printf("Enter the ending index number : ");
    scanf("%d",&end);
    
    for(i=0; s[i]!='\0'; i++);
    n=i;
    // 1st way
    // for(i=0; i<n; i++)
    // {
    //     if(i==start){
    //     while(start<=end)
    //     {
    //         if(s[start]>=97&&s[start]<=122)
    //         s[start++]-=32;
    //         else start++;
    //     }   
    // }
    // }

    while(start<=end)
    {
        if(s[start]>=97&&s[start]<=122)
        s[start++]-=32;
        else start++;
    }
    printf("%s",s);
}

/*
Enter a String : swapnil kature
Enter the Starting index number : 2
Enter the ending index number : 9
swAPNIL KAture
*/