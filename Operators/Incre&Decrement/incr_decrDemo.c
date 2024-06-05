#include<stdio.h>
void main()
{
    // If dec and initi done on same line then go for execution from left to right or else According to Operator Precendency 
    // variable = change +ready => Changeble

    // int a=10,b=15;
    // a++;
    // b--;
    // printf("%d, %d\n",a,b);     //11, 14
    // a=10,b=15;
    // ++a;
    // --b;
    // printf("%d, %d",a,b);       //11, 14


    // Because in printf() it will print first then incre or decre
    // printf("%d, %d\n",a++, b--);    //10, 15
    //  a=10,b=15; 
    // printf("%d, %d\n\n",++a, --b);   //11, 14


    // int x=10,y;
    // y=x++;
    // printf("%d, %d\n",x, y);    // 11, 10
    // x=10;
    // y=++x;
    // printf("%d, %d\n",x, y);    // 11, 11

    int x=10,y;
    y=x--;
    printf("%d, %d\n",x, y);    // 9 10
    x=10;
    y=--x;
    printf("%d, %d\n",x, y);    // 9, 9


    // Multiple increm and decre not allowed
    // ex. a++++, +++a++++, ----a;

    // int a=1,b;
    // b=a++ + a++ + a++;     // 1+2+3=6
    // printf("%d, %d\n",a,b);     // 4, 6
    // a=3;                        
    // b=a-- + a-- + a--;         //3+2+1=6
    // printf("%d, %d\n",a,b);     //0, 6


    // We can't perform ++/-- on expression because of expression result always constant

    int p=10;
    p++/2;          //10/2=5++ => [ 5 not stored in p beacuase = operator not used ]
    printf("%d\n",p);   //  p++ =>11
    ++p/2;          //12/2=6 => [ 6 not stored in p beacuase = operator not used ]
    printf("%d\n",p);   //12


    // int ab=10;
    // printf("%d\n",ab++/2);  //5     
    // printf("%d\n",++ab/2);  //12/2=>6


    // int a=1,b=19;
    // a=a++ + ++b;        
    // b=++a + b++;        
    // printf("%d %d", a,b);  
     // 23, 44 with precedency // 22, 42 without precedency
    // we donn't have to use precedency in online compiler it only works in turbo c.



    // In printf() the execution is from right to left and printing from left to right.

    int a=1;
    printf("%d, %d, %d, %d, %d\n", ++a, a++, a--, --a, ++a);    
    //Here execution from right to left 
    // i.e ++a=2 ,  --a=1,  a--=1 , a++=0, ++a=2  and this print from left to right 
    // i.e  o/p : 2 , 0, 1 , 1, 2
    a=2;
    printf("%d, %d, %d, %d, %d\n", ++a, a*10, a=10, a++, ++a);      //11, 100, 10, 3, 3

    printf("%d, %d, %d\n",++a, a=printf("Thank You\n"), a=50 );      
    //Thank You    
    // 11,10,50

    printf("%d\n",++a,a=30);    //31
    printf("%d, %d, %d\n",a=a++,a,++a);    // 32, 32, 32

    // int aa=1,b=2,c=0;
    // c=(a++ + ++b)++;    //Error : Expression must be modifiable
    // printf("%d, %d, %d\n",a,b,c);   //Error : Lvalue required in function main i.e left side value is not changeable



    int ab=1, bc=2, c=0;
    c=ab+++bc;
    printf("%d, %d, %d\n",ab,bc,c);     //2 2 3

    

}