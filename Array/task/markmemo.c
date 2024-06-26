/*
Read a stud id, name,6 sub marks and find stud total, avg and pass/fail using array.
*/

#include<stdio.h>
int main()
{
    int id,sub[6], tot=0, i, p=1;
    char name[30];
    float avg;
    printf("Enter Student id ");
    scanf("%d",&id);

    printf("Enter Student name "); 
    scanf("%s",name);
    // gets(name);      //we can use gets() instead of scanf to avoid spaces
    printf("Enter 6 sub marks ");

    for(i=0; i<6; i++)
    {
        scanf("%d",&sub[i]);
        tot+=sub[i];
        if(sub[i]<35)   p=0;
    }
    avg=tot/6.0;
    printf("%s total=%d, avg=%.2f and got %s",name,tot,avg, p? "Passed" : "Failed");
}   


/*
Enter Student id 121
Enter Student name Swapnil
Enter 6 sub marks 87 89 89 99 88 97
Swapnil total=549, avg=91.50 and got Passed
*/