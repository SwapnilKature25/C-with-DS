#include<stdio.h>
void main()
{
    if(1==1) ; else printf("c");    
    // Blank Screen

    // if(1==1) else ; printf("Bye");   
    //  error: expected expression before 'else'







    float b=1.7;
    double c=1.7;
    printf("b=%.10f, c=%.10lf\n",b,c);

    b=9.9 , c=9.9;
    printf("b=%.10f, c=%.10lf\n",b,c);
    
    b=9.0 , c=9.0;
    printf("b=%.10f, c=%.10lf\n",b,c);

    b=9.5 , c=9.5;
    printf("b=%.10f, c=%.10lf\n",b,c);

    /*
        b=1.7000000477, c=1.7000000000
        b=9.8999996185, c=9.9000000000
        b=9.0000000000, c=9.0000000000
        b=9.5000000000, c=9.5000000000
    */



    float a=1.7;
    if(a==1.7) puts("True"); else puts("False");        //false  -> because by default decimal no. is of double so it contain 8 bytes and a cont 4 bytes.
    if(a==1.7f) puts("True"); else puts("False");        //true
    a=9.9;
    if(a==9.9) puts("True"); else puts("False");        //false
    a=9.0;
    if(a==9) puts("True"); else puts("False");        //true
    a=9.5;
    if(a==9.5) puts("True"); else puts("False");        //true  ->  Because both contains same value refer above example
    a=9.0;
    if(a==9.0) puts("True"); else puts("False");        //true  ->  Because both contains same value
    a=4.5;
    if(a==4.5) puts("True"); else puts("False");        //true  ->  Because both contains same value

    // From above 4 stmts we can say that after decimal if there is 5 or 0 then it will be always true  i.e => 3.5 == 3.5 , .....






    float d=1.7;
    char e=300;

    if(sizeof(d)==sizeof(1.7))  puts("Equal");   else  puts("Not Equal");       //not equal  <-  4bytes == 8bytes 
    if(d>1.7)  puts("Equal");   else  puts("Not Equal");       // equal  ->  1.7 > 1.7
    if(e>'a')  puts("Equal");   else  puts("Not Equal");       // Not equal  ->  d=300 so, 300-256 = 44  and 44==1.7/8byte => not equal


    if(5&&5==5)  puts("Equal");   else  puts("Not Equal");       // equal  =>  priority => ==, &&
    if((5&&5)==5)  puts("Equal");   else  puts("Not Equal");       // not equal  =>  priority => (), ==

    if(012==12)  puts("Equal");   else  puts("Not Equal");       // not equal  =>  012 octal to decimal conver val is 10,  i.e 10!=12
    if(012==10)  puts("Equal");   else  puts("Not Equal");       //  equal  =>  012 octal to decimal conver val is 10,  i.e 10==10




}