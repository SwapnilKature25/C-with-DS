#include<stdio.h>
int d[4];
#define p 4     /* Macro */
int main()
{
    // int a[4]={ };       //0     0     0     0
    // note: (near initialization for 'a[1]')
    int a[4]={{1,2},{3,4}};       // 1     3     0     0
    for(int i=0; i<4; i++)
    {
        // printf("%6d",i[a]);
    }





    // int b[4]={{1},{2},{3},{4}};       // 1     2     3     4
    // int b[4]={1,2,3,4,5};       // 1     2     3     4
    for(int i=0; i<4; i++)
    {
        // printf("%6d",i[b]);
    }

    //  note: (near initialization for 'b')
    //  1     2     3     4


    // int b[4]={{1},2,3,4,5};       // 1     2     3     4
    for(int i=0; i<4; i++)
    {
        // printf("%6d",i[b]);
    }




    // int  b[4]={{1},2};          // 1     2     0     0     
    // int  b[4]=9;          // error: invalid initializer
    for(int i=0; i<4; i++)
    {
        // printf("%6d",i[b]);          
    }




    // int  c[4]={'1','2','3','4','5'};          // 49    50    51    52
    // int  c[4]={1.1,2.2,3.3,4.4};          //  1     2     3     4
    int  c[4]={1>2, 4>3, 3-1, 40000};          //   0     1     2 40000     
    for(int i=0; i<4; i++)
    {
        printf("%6d",i[c]);          
    }




    // int  d[4]={1,2, ,4};          //error: expected expression before ',' token    
    // int  d[4];          //4199136        0   4201008   6422224 
    // for(int i=0; i<4; i++)
    // {
    //     printf(" %6d  ",i[d]);          
    // }



    // static variable
    // static int  d[4];          //0        0        0        0  
    
    // int  d[4];          //9        0   4201024   6422224   
    int  d[4]={1};          //9        0        0        0  
    d[0]=9;
    for(int i=0; i<4; i++)
    {
        printf(" %6d  ",i[d]);          
    }



    // int n=4,  ar[n]={1,2,3,4};        //constatn expression required in fun main         
    const int n=4,  ar[n]={1,2,3,4};        //constatn expression required in fun main         
    d[0]=9;
    for(int i=0; i<4; i++)
    {
        printf(" %6d  ",ar[i]);          
    }


    int ar[p]={1,2,3,4};        //constatn expression required in fun main         
    // p=20;
    for(int i=0; i<4; i++)
    {
        printf(" %6d  ",ar[i]);          
    }
    // error: lvalue required as left operand of assignment
    //  p=20;


}