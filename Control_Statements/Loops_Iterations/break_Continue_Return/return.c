#include<stdio.h>
#include<stdlib.h>
void show()
{       
    puts("Good Afternoon");
    // return; // program return values from here 
    exit(0);
    puts("Good Night");
}

void main()
{
    puts("Good Morning");
    show();
    puts("Good Night");
}

// break;
// Good Morning
// Good Afternoon
// Good Night

// for exit()   =>terminates total program
// Good Morning
// Good Afternoon