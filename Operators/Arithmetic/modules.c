 #include<stdio.h>
#include<Math.h>
void main()
{
      // Note : Any no.%10 returns last digit    

    printf("%d\n", 5%2);
    printf("%d\n", 2%5);
    printf("%d\n", 52%77);              //when divisor is bigger than dividend then divisor is the answer

    /* 
    In c/c++ we can't perform floating modules with % operator.
    For this we have to use fmod() present in math.h  .    
    */
    // printf("%f\n", 5%2.0);
    // printf("%f\n", 5.0%2);
    // printf("%f\n", 2.0%5.0);
    // printf("%f\n", 5%2);

    // printf("%f\n", fmod(5%2.0));
    // printf("%f\n", fmod(5.0 % 2));
    // printf("%f\n", fmod(2.0%5.0));
    // printf("%f\n", fmoad(5%2));

    // In Modules if the Numerator is Negative then result is also - negative   
    printf("%d\n", -5%2);   //-1
    printf("%d\n", 5%-2);   // 1
    printf("%d\n", -5%-2);  // -1

}