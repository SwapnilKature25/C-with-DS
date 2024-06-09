#include<stdio.h>
int main()
{
    if(3>3) printf("Hii");
    else printf("Hello");
    // else printf("Byee");     //Multiple else not allowed i.e let's take if has husband and else has his wife.

    /*
    error: 'else' without a previous 'if'
    */

    if(3>3) printf("Hii");
    else printf("Hello");
    // if(3==3)                     //-- if should be terminate before going to else
    // else printf("Byee");

    /*
    error: expected expression before 'else'
     else printf("Byee");
    */

}