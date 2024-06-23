#include<stdio.h>
int main()
{   
    int n,nr,nc,r,c,a=1;
    printf("Enter no. of rows and columns ");
    scanf("%d %d",&nr, &nc);

    for(r=1; r<=nr; r++)
    {
        for(c=1; c<=nc; c++)
        {
            if(c%2==0)  printf("%c ",96+c);
            else printf("%c ",64+c);
        }
        printf("\n");
    }
}


/*
Enter no. of rows and columns 10 26
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z 
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
A b C d E f G h I j K l M n O p Q r S t U v W x Y z
*/