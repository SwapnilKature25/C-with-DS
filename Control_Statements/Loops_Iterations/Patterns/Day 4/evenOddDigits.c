
#include<stdio.h>
int main()
{   
    int nr,r,c,e=2,o=1;
    printf("Enter no. of rows  ");
    scanf("%d",&nr);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=r; c++)      
        {
            if(r%2==0) {
                   printf("%3d ",e);
                   e+=2;
            }
            else{
                printf("%3d ",o);
                o+=2;
            }
        }
        printf("\n");
    }

}


/*
Enter no. of rows  10
  1
  2   4
  3   5   7
  6   8  10  12
  9  11  13  15  17
 14  16  18  20  22  24
 19  21  23  25  27  29  31
 26  28  30  32  34  36  38  40
 33  35  37  39  41  43  45  47  49
 42  44  46  48  50  52  54  56  58  60
*/