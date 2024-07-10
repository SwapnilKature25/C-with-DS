// Without arguments, with return value:

#include<stdio.h>
/*
int sum(void);
void main()
{
    int s=sum();
    printf("sum=%d",s);         //sum=20
    printf("sum=%d",sum());         //sum=20
}
int sum()
{
    int x,y;
    printf("Enter a,b values ");
    scanf("%d%d",&x,&y);
    return x+y; 
}
*/

/*
Enter a,b values 12 12
sum=24
Enter a,b values 23 4  
sum=27
*/

/*
int max(void);
void main()
{
    int s=sum();
    printf("sum=%d\n",s);         //sum=20
    // printf("sum=%d\n",sum());         //sum=20
}
int sum()
{
    int x,y;
    printf("Enter a,b values ");
    scanf("%d%d",&x,&y);
    return x>y?x:y; 
}
*/

// Enter a,b values 4 3
// sum=4





int max(void);
void main()
{
    int s=sum();
    printf(s==1 ? "a is big" : s==0 ? "b is big" : "both were equal");         
}
int sum()
{
    int x,y;
    printf("Enter a,b values ");
    scanf("%d%d",&x,&y);
    return x>y?1:y>x?0:-1; 
}

// Enter a,b values 2 2
// both were equal
