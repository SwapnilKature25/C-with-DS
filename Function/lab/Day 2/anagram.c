  #include<stdio.h>
 #include<string.h>
void anagram(char s1[100],char s2[100])
{
    int i,n1,n2,j,num;
    for(i=0; s1[i]!='\0'; i++);
    n1=i;
    for(i=0; s2[i]!='\0'; i++);
    n2=i;
    
    if(n1>n2 || n2<n1) num;

    for(i=0; i<num; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(s1[i]>s1[j])
            {
            char t=s1[i];
            s1[i]=s1[j];
            s1[j]=t;
            }      
            
            if(s2[i]>s2[j])
            {
            char t=s2[i];
            s2[i]=s2[j];
            s2[j]=t;
            }         
        }
    }
    if(strcmp(s1,s2)==0)   printf("The Strings are Anangram");
    else printf("The Strings are not Anangram");

}
int main()
{
    char ch1[100],ch2[100];
    printf("Enter String 1 and 2");
    scanf("%s%s",ch1,ch2);
    anagram(ch1,ch2);
}