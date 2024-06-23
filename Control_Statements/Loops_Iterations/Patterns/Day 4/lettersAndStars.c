#include<stdio.h>
int main()
{   
    int nr,r,c,e=2,o=1;
    char ch='A';
    printf("Enter no. of rows  ");
    scanf("%d",&nr);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=r; c++)      
        {
            if(r==c || r==nr || c==1)  printf("* ");
            else   printf("%c ",ch++);
            
            if(ch>'Z')  ch='A';
        }
        printf("\n");

    }

}


/*
*
* *
* A *
* B C *
* D E F *
* G H I J *
* K L M N O *
* P Q R S T U *
* V W X Y Z [ \ *
* ] ^ _ ` a b c d *
* e f g h i j k l m *
* n o p q r s t u v w *
* x y z { | } ~  Ç ü é *
* â ä à å ç ê ë è ï î ì Ä *
* * * * * * * * * * * * * * *
*/

// After adding if cond..
/*

Enter no. of rows  15
*
* *
* A *
* B C *
* D E F *
* G H I J *
* K L M N O *
* P Q R S T U *
* V W X Y Z A B *
* C D E F G H I J *
* K L M N O P Q R S *
* T U V W X Y Z A B C *
* D E F G H I J K L M N * 
* O P Q R S T U V W X Y Z *
* * * * * * * * * * * * * * *

*/