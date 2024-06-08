

#include<stdio.h>
void main(){
        char rollno[20], name[20], grade[20];
        int mar,eng,hin,mat,sci,soc,total,p=1;
        float avg;

        printf("Enter stud rollno, name, 6 sub marks ");
        scanf("%s%s%d%d%d%d%d%d%d",&rollno, &name, &mar, &eng, &hin, &mat, &sci, &soc);
        total=mar+eng+hin+mat+sci+soc;
        avg=total/6.0;
        

}