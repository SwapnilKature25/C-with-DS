#include<stdio.h>
#include<stdlib.h>
void main(){
    abc:
    textcolor(random(16));
    textbackground(random(16));
    cprintf("Swapnil Kature");
    goto abc;

    // o/p : It will print the String in Different colors with background in infinte loop, until program termination.
}