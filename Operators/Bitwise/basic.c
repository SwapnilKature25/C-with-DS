#include<stdio.h>
void main()
{
    /*
    Bitwise Works on Bits i.e 0 and 1.
    THere are 4 types of Bitwise Operators those are ,
    1. & - Bitwise And  => when both bit's are 1 then result bit is 1 otherwise result bit is 0.
    2. | - Bitwise or   => when both bit's are 0 then result bit is 0 otherwise result bit is 1.
    3. XOR (^)          => when both exp are 1 and 1 or 0 and 0 then result is 0 other are 1.
    4. Compliment (~)    => Formula to find out ~ => n=-(n+1)   e.x: ~25=-26   i.e n=-(25+1) = -26
    5. left shift (<<)  => the left value doubles the no. of times on right side    e.x: 25<<2=25+25=50 => 50+50=100
    6. Right Shift (>>)  => the left value half the no. of times on right side      e.x: 25>>2=24/2=12  =>12/2=6

    */

    // & 
    printf("%d\n", 25 & 15);    //9

    // |
    printf("%d\n", 25 | 15);    //31

    // ^
    printf("%d\n", 25 ^ 15);    //22

    // ~
    printf("%d\n", ~25);    //-26

    // <<
    printf("%d\n", 25<<2);  //100
    printf("%d\n", 25<<15);  //1

    // >>
    printf("%d\n", 25>>2);     //6
    printf("%d\n", 25>>15);     //0


    printf("---------------------------------------\n");

    printf("%d\n %d\n %d\n %d\n %d\n", 25&15, 25|15, 25^15, ~25, ~-25); // 9 31 22 -26 24 

    printf(" %d\n %d\n %d\n %d\n", 25<<2, 25<<15, 25<<16, -2<<2);   // 100 819200 1638400(it's an 64 bit) -8

    // printf("%d\n", 25.0<<2); //error: invalid operands to binary << (have 'double' and 'int')

    // printf("%d\n", "a"<<2);     // error : invalid operands to binary << (have 'char *' and 'int')

    printf("%d\n", 'A'<<2); // 260

    int a=10;
    a<<2;       //40
    printf("%d\n",a);   //10
    a>>1;       //5
    printf("%d\n",a);   //10
    printf("%d\n",a<<2);    //40
    printf("%d\n",a);       //10
    printf("%d\n",a>>1);    //5
    printf("%d\n",a);       //10

printf("----------------------------------------\n");
    a=10;
    a=a<<2;       //40
    printf("%d\n",a);   //40
    a=a>>1;       //20
    printf("%d\n",a);   //20
    printf("%d\n",a=a<<2);    //80
    printf("%d\n",a);       //80
    printf("%d\n",a=a>>1);    //40
    printf("%d\n",a);       //40

    printf("----------------------------------------\n");

    a=10;
    a=a<<2+1>>2;    //2+1=3 3-2=1  10<<1= 20
     printf("%d\n",a);
      printf("%d\n",a<<2+3>>1);     //2+3=5 => 5-1=4   => 20<<4 = 320
       printf("%d\n",a);    //20






}