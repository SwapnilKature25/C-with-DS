// 

#include<stdio.h>
void main(){

    float sub1,sub2,sub3,sub4,sub5,sub6,marks,rollno;
    float total,avg;
    char school[25], name[25];

    printf("Enter your RollNo : ");
    scanf("%d",&rollno);
    printf("Enter your Name : ");
    scanf("%s",name);
    printf("Enter your School Name : ");
    scanf("%s",school);
    printf("Enter your subjects marks as : ");
    printf("\nEnglish\nMarathi\nHindi\nMath\nScience\nSocial Science\n");
    scanf("%f%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6);
    total=sub1+sub2+sub3+sub4+sub5+sub6;
    avg=total/6;

    printf("\n_____________________________________________________________\n");
    printf("\t\tBoard of Secondary Education\n\t\t\tMaharashtra");

    printf("\n_____________________________________________________________\n");
    printf("\n\tRoll No : %d \t\tName : %s\n\n\tSchool : %s\n",rollno,name,school);
    printf("\n_____________________________________________________________\n");
    printf("Subject\t\t\tMarks\t\t\tPass/Fail");
    printf("\n_____________________________________________________________\n");

    printf("\nEnglish\t\t\t%.0f \nMarathi\t\t\t%.0f \nHindi\t\t\t%.0f \nMath\t\t\t%.0f \nScience\t\t\t%.0f \nSocial Science\n",sub1,sub2,sub3,sub4,sub5,sub6);
    printf("\n_____________________________________________________________\n");

    if(sub1>35 && sub2>35 && sub3>35 && sub4>35 && sub5>35 && sub6>35)     
        // puts("Pass");
        printf("\n\n%s\tTotal Marks=%.2f\tAverage Marks=%.2f\tand got Passed",total,avg);
    else 
        // puts("Fail");
        printf("\n\n%s\tTotal Marks=%.2f\tAverage Marks=%.2f\tand got Passed",total,avg);


}