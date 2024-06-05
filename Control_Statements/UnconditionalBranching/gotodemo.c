#include<stdio.h>
#include<stdlib.h>
void main(){
    /*
    //1st way : We have another way to print the above o/p as it is :
    
    goto a;
    c: puts("Hyd"); goto last;

    b: puts("Ameerpet");
    goto c;

    a: puts("Naresh IT");
    goto b;
    last:
    */

    // o/p : the above code will print hyd ameerpet in infinite loop so to 
    //       to overcome this we should use  -> goto last;
    // After using it we have ,
    // Naresh IT
    // Ameerpet
    // Hyd






    /* 
    //2nd way : We have another way to print the above o/p as it is :
    goto a;
    c: puts("Hyd");  return;

    b: puts("Ameerpet");
    goto c;

    a: puts("Naresh IT");
    goto b;     */
 
    // Naresh IT
    // Ameerpet
    // Hyd







    //3rd way : We have another way to print the above o/p as it is :
    // to use exit(0) fun first include stdlib.h file
    goto a;
    c: puts("Hyd");  exit(0);    //note: include '<stdlib.h>' or provide a declaration of 'exit'

    b: puts("Ameerpet");
    goto c;

    a: puts("Naresh IT");
    goto b;
 
    // Naresh IT
    // Ameerpet
    // Hyd



}