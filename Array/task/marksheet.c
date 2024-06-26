/*
Read a stud id, name,6 sub marks and find stud total, avg and pass/fail using array.
*/

#include<stdio.h>
int main()
{
    int rollno,sub[6], tot=0, i, p=1;
    char name[30],dob[20], gender[10], father[20], mother[20], school[20], id1[30], id2[30],  subj[6][10]={"Marathi", "English", "Hindi", "Maths", "Science", "Social"};
    float avg;

    printf("Enter Stud ROllNo ");
    scanf("%d",&rollno);
    printf("Enter Stud Name ");
    scanf("%s",name);
    printf("Enter Dat of Birth ");
    scanf("%s",dob);
    printf("Enter gender ");
    scanf("%s",gender);
    printf("Enter Father Name ");
    scanf("%s",father);
    printf("Enter Mother Name ");
    scanf("%s",mother);
    printf("Enter School Name ");
    scanf("%s",school);
    printf("Enter Identification marks 1 ");
    scanf("%s",id1);
    printf("Enter Identification marks 2 ");
    scanf("%s",id2);
    printf("Enter 6 Subject Marks ");
    for(i=0; i<6; i++)
    {
        scanf("%d",&sub[i]);
        tot+=sub[i];
        if(sub[i]<35)   p=0;
    }
    avg=tot/6.0;

    puts("----------------------------------------------------------------");
    printf("\t\t BOARD OF SECONDARY EDUCATION");
    printf("\t\t\tMAHARASHTRA");
    puts("----------------------------------------------------------------");
    printf("Roll No : %d\t  Name : %s\n",rollno,name);
    printf("DOB : %s\t  Gender : %s\n",dob,gender);
    printf("DOB : %s\t  Gender : %s\n",dob,gender);
    printf("Father : %s\t  Mother : %s\n",father,mother);
    printf("School : %s\n",school);
    puts("----------------------------------------------------------------");
    printf("Identification Mark 1 : %s\n",id1);
    printf("Identification Mark 2 : %s\n",id2);
    puts("----------------------------------------------------------------");
    printf("Subject\t Marks \tPass/Fail\n");
    puts("----------------------------------------------------------------");
    
    for(i=0; i<6; i++)
    {
        printf("%s \t %d \t %s\n",subj[i],sub[i],sub[i]>=35? "P" : "F");
    }
    puts("----------------------------------------------------------------");
    printf("%s total=%d, avg=%.2f and got ",name, tot,avg);
    if(p==0)    puts("Failed");
    else   if(avg>=75)  puts("Distinction");
    else   if(avg>=60)  puts("1st class");
    else   if(avg>=50)  puts("2nd class");
    else   puts("3rd class");
    puts("-----------------------------------------------------------------");

}