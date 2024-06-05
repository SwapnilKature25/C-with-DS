#include<stdio.h>
void main()
{
    // int a;
    // long int x;
    // float b;
    // char c;
    // printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
    // printf("%d %d %d\n", sizeof(int), sizeof(float), sizeof(char));
    // printf("%d %d %d\n\n", sizeof(-25), sizeof(25), sizeof('a'));
    
    
    printf("%d %d %d\n", sizeof(32768), sizeof(50000), sizeof(1000000));
    printf("%d %d %d\n\n", sizeof(32768u), sizeof(50000U), sizeof( 100000));

    printf("%d %d %d\n", sizeof(100000u), sizeof(5l), sizeof(5L));
    printf("%d %d %d\n", sizeof(5.5f), sizeof((float)1), sizeof((char)1));  //4 4 1
    printf("%d %d %d\n", sizeof((int)3.4), sizeof((unsigned)1.2), sizeof((long)1));  //4 4 4

    // In C by default float is long float or double i.e 8 bytes
    printf("%d %d %d\n", sizeof(1.1), sizeof(1.1l), sizeof((float)1));  //8 12 4 in this compiler and on code hs => 8 16 4
    printf("%d %d %d\n\n", sizeof(1.5), sizeof((float)10), sizeof((float)'a'));   //8 4 4

    // In C 1.5 and 1.0 always has default value 0 and rather than thiss all has garbage value i.e like 1.1,1.2,1.6,1.7,...

    char a[10]="hyd", b[]="hyd";
    char c='a';
    // the string char in "hyd" is 3 with 1 null char i.e 3+1= 4
    printf("%d, %d, %d\n", sizeof(c),sizeof('a'), sizeof("a"));     // it takes 'a' ascii value as 97 and then return 4 int bytes   1 , 4, 2
    printf("%d, %d, %d\n", sizeof(a),sizeof(b), sizeof("hyd"));     // 10  4  4
    printf("ab addr is %u\n", "ab");


        

    // here "ab"+1 => 3+1=4 and sizeof(int) is 4
    // here ("ab")+1 => 3+1=4 and sizeof(int) is 4
    // the string char in "1.23" is 4 with 1 null char i.e 4+1= 5
    printf("%d, %d, %d\n", sizeof("ab"+1),sizeof(("ab")+1), sizeof("1.23"));    //4 4 5  
    printf("%d\n", sizeof(1.1)+1.1);    // it produces garbage value

    // In C 1.5 and 1.0 always has default value 0 and rather than thiss all has garbage value i.e like 1.1,1.2,1.6,1.7,...
    
    printf("%d\n", 1.1);    // it produces garbage value
    printf("%d\n", 1.5); 
    printf("%d\n", 1.0); 



 
}