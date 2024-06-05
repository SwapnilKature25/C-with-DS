#include<stdio.h>
void main(){ 

    // 

    // if()        
    // {
    //     printf("a");
    //     printf("b");
    // }
    //     printf("c");

    /*
    o/p : error: expected expression before ')' token  if()
          if condition can't be empty , it will throw Expression syntex error
    */





    // if(5/0)        // it will throw error 
   
    // if( if(1>0))        // error: expected expression before 'if' -  if( if(1>0))  /   erro: exp syntax
    
    
    // if( 2.0 % 2.0 )        //  Error :  error: invalid operands to binary % (have 'double' and 'double')     //    Illegal use of floating point
    
    
    // if( a )        //  error: 'a' undeclared 
    
    // if( true )        //  error: 'true' undeclared 
    
    // if condition can also run when it contains 0 or other than 0 ;
    // if( 5 )        // o/p :abc       if(0) : abc
    {
        printf("a");
        printf("b");
    }
        printf("c");

}