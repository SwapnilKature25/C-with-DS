#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    char opt;
    start:
    printf("\t\t\tEnter 2 Numbers ");
    scanf("%d%d",&n1,&n2);
    puts("============================================================================================");
    printf("\t\t\tM    E   N   U\n");
    puts("============================================================================================");

    puts("\t\t\t+.ADD");
    puts("\t\t\t-.SUB");
    puts("\t\t\t*.MUL");
    puts("\t\t\t%.MOD");
    puts("\t\t\t/.DIV");
    puts("\t\t\t^.POW");
    puts("\t\t\tE.EXIT");
    puts("============================================================================================");
    
    printf("\t\t\tEnter Your Option[ ]\b\b"); 
    scanf(" %c",&opt);

    printf("\n\n");
    // gotoxy(10,20);       used in c or c++ compiler
    switch(opt){
        case '+': printf("Sum= %d",n1+n2); break;
        case '-': printf("Sub= %d",n1-n2); break;
        case '*': printf("Mul= %d",n1*n2); break;
        case '/': printf("Div= %d",n1/n2); break;
        case '%': printf("Mod= %d",n1%n2); break;
        case '^': printf("Pow= %d",n1^n2); break;
        case 'E': case 'e' : exit(0);
        default : printf("Invalid Option");
    }
   
    printf("\n\n============================================================================================");

    goto start;
}