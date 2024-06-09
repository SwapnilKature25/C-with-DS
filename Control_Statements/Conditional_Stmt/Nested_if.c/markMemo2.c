

#include<stdio.h>
void main(){
        char rollno[20], name[20], grade[20],school[20];
        int mar,eng,hin,mat,sci,soc,total,p=1;
        float avg;

        printf("Enter stud rollno, name, school name ");
        scanf(" %s%s%s",rollno, name,school);
        printf("Enter  6 sub marks ");
        scanf("%d%d%d%d%d%d", &mar, &eng, &hin, &mat, &sci, &soc);
        total=mar+eng+hin+mat+sci+soc;
        avg=total/6.0;

        puts("--------------------------------------------------");
        puts("\tBOARD OF SECONDARY EDUCATION");
        puts("\t\tMAHARSHTRA");
        puts("--------------------------------------------------");
        printf("Roll NO : %s\t\tName : %s\nSchool : %s\n",rollno,name,school);
        puts("--------------------------------------------------");
        printf("Sub\t\tMarkks\t\tPass/Fail\n");
        puts("--------------------------------------------------");
        printf("Marathi\t\t%d\t\t",mar); 
        if(mar>=35) puts("P");  else printf("F\n",p=0);

        printf("English\t\t%d\t\t",eng); 
        if(eng>=35) puts("P");  else printf("F\n",p=0);

        printf("Hinndi\t\t%d\t\t",hin); 
        if(hin>=35) puts("P");  else printf("F\n",p=0);

        printf("Math\t\t%d\t\t",mat); 
        if(mat>=35) puts("P");  else printf("F\n",p=0);

        printf("Science\t\t%d\t\t",sci); 
        if(sci>=35) puts("P");  else printf("F\n",p=0);


        printf("Social\t\t%d\t\t",soc); 
        if(soc>=35) puts("P");  else printf("F\n",p=0);

        puts("--------------------------------------------------");

        printf("%s Total=%d, Average=%.2f and got ",name,total,avg);

        if(p==0)    puts("Failed");
        else if(avg>=75) puts("Distinction");
        else if(avg>=60) puts("1st Class");
        else if(avg>=50) puts("2nd Class");
        else puts("3rd Class");
        puts("--------------------------------------------------");


        /*
        
                --------------------------------------------------
                        BOARD OF SECONDARY EDUCATION
                                MAHARSHTRA
                --------------------------------------------------
                        Roll NO : RP2003                Name : Swapnil
                        School : RP_Engilsh_Medium_School
                --------------------------------------------------
                Sub             Markks          Pass/Fail
                --------------------------------------------------
                Marathi         87              P
                English         89              P
                Hinndi          98              P
                Math            87              P
                Science         87              P
                Social          89              P
                --------------------------------------------------
                Swapnil Total=537, Average=89.50 and got Distinction
                --------------------------------------------------
        
        */


        

}