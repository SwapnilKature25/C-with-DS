#include<stdio.h>
void main()
{
    // sizeof("abc") take all string char + null char as count i.e abc+n = 3+1=4 

    printf("%d\n",sizeof(sizeof("Kishore")));   //sizeof(8) => 4 in turbo c it gives 2byte
    // because it has (1,2,3) and execution goes from left to right so right is the ans i.e (100,1.1)=> 1.1=8 bytes. 
    // same for 2nd (1.2,100) => 100=4bytes

int a=8888;
    printf("%d, %d\n",sizeof(100,1.1), sizeof(1.2, 100));   //8, 4 
    printf("%d, %d\n",sizeof(100+1.1), sizeof(1.2+100));   //4, 4
    printf("%d, %d\n",sizeof("Kishore"),printf("Kishore"));   //Kishore8, 7
    printf("%d, %d\n",sizeof(printf("Kishore")));   //4, 7  In sizeof() print() doesnt print 
    printf("%d\n",sizeof("Kishore"));   // 8
    printf("%d\n",sizeof(a=10000));   //4   sizeof(10000)
    printf("%d\n",sizeof(a=a+1));   // 4
    // printf("%d\n",sizeof());   // sizeof() cant be empty 

    printf("%d, %d, %d\n",sizeof(""), sizeof(" "), sizeof(" \0"));   // 1, 2, 3
    printf("%d\n",printf("Kishore\0Naidu"));   // Kishore7
    printf("%d\n",printf("Kishore\0Naidu\0vizag"));   // Kishore7






}