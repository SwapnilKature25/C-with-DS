/*
#include<stdio.h>
void main(){
    printf("a=%d\t",a);         //Undefined Symbol 'a'
    {
        int a=300;
        printf("a=%d\t", a);
    }
    printf("a=%d\n",a);
}

// error: 'a' undeclared (first use in this function)
*/



/*      (1)
#include<stdio.h>
int a=1, b=2, c=3;
void main(){
    {
    int a=10,b=20, c=30;
    printf("Sum=%d\t", a+b+c);  //60
    }

    printf("sum=%d",a+b+c);     //6
}

// sum=60 , sum=6
*/


/*      (2)
// Global variables empty var contains 0 value while local var contains empty var Garbage value
#include<stdio.h>
int a=1, b=2, c;
void main(){
    {
    int a=10,b=20, c;
    printf("Sum=%d\t", a+b+c);  //Garbage
    }

    printf("sum=%d",a+b+c);     //1+2+0=3
}

// sum=Garbage , sum=3
*/


/*
#include<stdio.h>
int a=1, b=2, c;
void main(){
    {
    int a=10,b=20;
    printf("Sum=%d\t", a+b+c);  //30
    }

    printf("sum=%d",a+b+c);     //1+2+0=3
}

// sum=30 , sum=3
*/


/*
#include<stdio.h>
void main(){
    {
    int a=10,b=20 , c=30;
    printf("Sum=%d\t", a+b+c);  //30
    }

    printf("sum=%d",a+b+c);     //Error
}
// 'a' , 'b' , 'c' undeclared (first use in this function)
*/



/*
#include<stdio.h>
int a=1,b=2,c=3;
void main(){
    {
    printf("Sum=%d\t", a+b+c);  //6
    }

    printf("sum=%d",a+b+c);     //6
}
// sum=6 , sum=6
*/


/*
#include<stdio.h>
int a=1,b=2,c=3;
void main(){
    {
    printf("Sum=%d\t", a+b+c);  //6
    c=30;
    }

    printf("sum=%d",a+b+c);     //1+2+30=33
}
// sum=6 , sum=33
*/



#include<stdio.h>
int a=1,b=2,c=3;
void main(){
    {
    int c=10;
    printf("Sum=%d\t", a+b+c);  //1+2+10=13
    c=30;
    }

    printf("sum=%d",a+b+c);     //1+2+3=6
}
// sum=13, sum=6