//      Printing below series:
    //  1-2+3-4+5=3


#include<stdio.h>
#include<math.h>
    int main()
    {
            
            int n,i,s=0;
            printf("Enter the Value ");       
            scanf("%d",&n);

            // for(int i=1; i<=n; i++)
            // {
            //     if(i%2==0){
            //         printf("%d+",i,s=s-i);
            //     }
            //     else{
            //         printf("%d-",i);
            //         s=s+i;
            //     }
            // }
            // Using \b
            // printf("\b=%d",s);




            for(int i=1; i<n; i++)
            {
                if(i%2==0)   printf("%d+",i,s=s-i);
                else   printf("%d-",i,s=s+i);
            }

            if(i%2==0)  s=s-i;
            else s=s+i;
            printf("%d=%d",i,s);

    }