#include<stdio.h>
int main()
{
    char s[100]="Naresh IT, Ameerpet, Hyd-500016";
    char p[100]="Naresh\tIT\nAmeerpet\0Hyd-500016";
    char s1[2]="N", s2[]="N",s3[2]={'N'}, s4[]={'N','\0'}, s5[]={'N'};
    printf("%s\n",s);
    puts(s);
    printf(s);
    puts(p);

    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);
    puts(s5);

    /*
    Naresh IT, Ameerpet, Hyd-500016
    Naresh IT, Ameerpet, Hyd-500016
    Naresh IT, Ameerpet, Hyd-500016



    Naresh   IT
    Ameerpet



N
N
N
N
NN

    */
}

