#include<stdio.h>
void main()
{  
    int a=32768;
    printf("%u\n",a);       //32768
    a=32770;
    printf("%u\n",a);       //32770
    a=65540;
    printf("%u\n",a);       // in 16 bit compiler its 4 and it 32 bit its 65540
    a=-32770;
    printf("%u\n",a);       // in 16 bit compiler its 32766 and it 32 bit its 4294934526
}