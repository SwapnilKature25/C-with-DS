#include<stdio.h>
int show()
{
    // return 1,2,3;       //exectuion from right to left
    return 1; return 2; return 3;       //1
}
int main()
{
    printf("%d",show());    //3     //1
}