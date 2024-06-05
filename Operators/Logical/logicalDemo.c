#include<stdio.h>
void main()
{
    // In c other than 0 anything is 1.

    // printf("%d\n", 5==3  7>3);      //error
    printf("%d\n", 5==3 && 7>3);       // If left value or expression of && is 0 then right side not checked
    printf("%d\n", 5==5 && 7>3);       // If left value of && is 1 then right side also checked

    printf("%d\n", 5==5 || 7>3);       // If left value of || is 1 then right side not checked
    printf("%d\n", 5==3 || 7>3);       // If left value of || is 0 then right side also checked

    printf("%d\n", 3==3 && 7>3);  
    printf("%d\n", 5==3 && 7>3);  
    printf("%d\n", 'a'=='a' || 'a'>'A');  
    printf("%d\n", !('a'=='a'));  

    printf("-----------------------------------------------\n\n\n");

    printf("%d\n", 'a'=='a' && 1>=1 && 2!=2);   //0
    printf("%d\n", 'a'=='A' && 1>=1 && 2==2);   //0

    printf("%d\n", 5>2 ||  7!=8 && 9<9);  //1
    printf("%d\n", (5>2 ||  7!=8)  && 9<9);  //1 
    printf("%d\n", 5 && -5);
    printf("%d\n", 0 || 'a');
    printf("%d\n", 1.1 && 2.2);
    printf("%d\n", 5.1 || 3.4);    
    printf("! opposites the values i.e %d\n", !5.5>0 || !0==1);    //0 , 1 = 1
    printf("! opposites the values i.e %d\n", !5.5>0 && !0==1);    //0  = 0


}