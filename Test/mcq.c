#include<stdio.h>
int main()
{
    /*int arr[] = {1, 2, 3, 4, 5};
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < max) {
            max = arr[i];
        }
    }
    printf("%d", max);      //1
    */



   /*
    int arr[] = {2, 3, 5, 7, 11};
    int product = 1;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {      
            product *= arr[i];
        }
    }
    printf("%d", product);      //2
    */

   /*
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        arr[i] = arr[i] * arr[i];   //it will do sqaure of each index value
    }
    printf("%d", arr[3]);       //16
    */




   /*
Iteration 0: i = 0

temp = arr[0] = 5
arr[0] = arr[5 - 0 - 1] = arr[4] = 1
arr[4] = temp = 5
Array after this iteration: {1, 4, 3, 2, 5}

Iteration 1: i = 1
temp = arr[1] = 4
arr[1] = arr[5 - 1 - 1] = arr[3] = 2
arr[3] = temp = 4
Array after this iteration: {1, 2, 3, 4, 5}
*/
    // int arr[5] = {5, 4, 3, 2, 1};       // {4, }3
    // for (int i = 0; i < 5 / 2; i++) {           //i<2   i=0, i=1
    //     int temp = arr[i];      
    //     arr[i] = arr[5 - i - 1];   
    //     arr[5 - i - 1] = temp;      
    // }
    // printf("%d", arr[1]);       //2







    /*
    int i, j;
    for(i = 1; i <= 4; i++) {       //1   //2       //3
        for(j = 1; j <= 5; j++) {      //1,2,3,4,5   //2,3,4,5   //3,4,5
            if(j >= i)              //TRUE,1,1,1,1  //  ,1,1,1,1   //  , ,1,1,1
                printf("* ");
            else
                printf("  ");
        }
        printf("\n"); 
    }
    */
/*
    * * * * *
      * * * *
        * * *
          * *
            
*/






    int i, j;
    for(i = 1; i <= 3; i++) {       
        for(j = i; j <= 3; j++) {
            printf("%d ", j);        
        }
        printf("\n");
    }
    //1 2 3
    //2 3 
    //3


    // char str[] = "OpenAI";
    // str[4] = '\0';
    // printf("%s\n", str);          //Open





 
   
//   char arr[]="12345";
//   int sum=0;
//   for(int i=0;i<5;i++)
//   sum+=arr[i];      //it will take the ascii value of digits and add them
//   printf("%d\n",sum);     //202

    




    for(i = 0;i < 10; i++);
    printf("%d\n", i);        //syntax error :




    int arr[2][2] = {
    {1, 2},
    {3, 4}      };
    printf("%d\n", arr[0][0] + arr[1][1]);      //5
    //1+4=5




     char str[] = "World";
    printf("%c", str);          //no output

  return 0;

}