// Ternary / Conditional operator( ? : )

#include<stdio.h>
void main(){
    int a,b,big;
    printf("Enter a,b values ");
    scanf("%d%d",&a,&b);
    if(a>b) printf("%d is Big\n",a);
    else printf("%d is Big\n",b);
    /*
        Enter a,b values 4 5
        5 is Big
    */

   printf("%d is biig\n", a>b ? a : b);
   puts(a>b ? "a is big " : "b is big");        //24 43  => 43 is big
   a>b ?  puts("a is  big") : puts("b is big");

   big=a>b ? a : b;
   printf("%d is big\n",big);

   puts(a>b? "a is big" : (b>a) ? "b is big" : "Both are Equal");
}