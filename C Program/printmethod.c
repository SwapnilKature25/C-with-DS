#include<stdio.h>
#include<math.h>    //for floor and ceil fuctions
void main()
{
    float a2=4;
    int a=3;
    float a3=4;
    char name[]="Kishore";

    printf("%d\n"+1,999);   //d
    printf("%d\n"+1);   //d
    printf("%d Friend %d\n");   //garbage_value Friend Grval
    // printf("%s Friend %s\n");        //   friend
    // // printf("%c Friend %c\n");     //  grval  friend   grval
    printf("%d + %d = %d\n",1,2,3);     //1 + 2 =3
    printf("%d + %d = %d\n",1,2);       //1 + 2 = grval
    printf("%d + %d = %d\n",1,2,3,4);   //1 + 2 =3

    printf("-----------------------------------------------------\n");

    printf("%d + %d = %d\n",'1','2','3');   //49 + 50 = 51
    printf("%d + %d = %d\n",'a','b','A'+'B');   //97 + 98 = 131
    printf("%d + %d = %d\n","a","b","c");   // garbage + garbage = garbage
    printf("%c + %c = %c\n",100,101,67);    // d + e =c
    printf("%D + %d = %d\n",1,2,3);     //D + 1= 2
    printf("%d + %D = %d\n",1,2,3);     //1 + D= 2
    printf("%d + %d = %D\n",1,2,3);     //1 + 2= D
    printf("%d % %d = %d\n",5,2,5%2);     //5 %d = 2
    printf("%d %% %d = %d\n",5,2,5%2);     //5 % 2 = 1
    printf("%%d %% %%d = %%d\n",5,2,5%2);     //%d % %d = %d


    printf("-----------------------------------------------------\n");

    printf("%d\n",5.2);     //garbage
    printf("%d\n",5.5);     //0
    printf("%d\n",5.0);     //0
    printf("%d\n",5.9);     //garbage

    printf("%5d\n",5);     // _ _ _ _ 5
    printf("%-5d\n",5);     // 5 _ _ _ _
    printf("%1d\n",27);     // 27
    printf("%*d\n",5,5);     // _ _ _ _ 5
    printf("%#d\n",5,5);     // 5
    printf("%$d\n",5,5);     // %d
    printf("%-*d\n",5,5);     // 5 _ _ _ _ 
    printf("%.5d\n",5);      // _ _ _ _ 5
    printf("%-.5d\n",5);     // _ _ _ _ 5

    printf("-----------------------------------------------------\n");

    // int a=3;  declare start of program 
    printf("%i + %i = %i\n",1,2,3);     // 1 + 2 =3
    printf("%I + %I = %I\n",1,2,3);     // I + I = I
    printf("%id + %id = %id\n",1,2,3);     // 1d + 2d = 3d
    printf("%S + %S = %S\n","a","b","c");     // %S + %S =%S
    printf("%d + %d = %d\n",1,2);   // 1 + 2 = 3


    printf("-----------------------------------------------------\n");


    // printf("%f\n", 12);     //runtime error in turbo and 0.000000 in vs

    printf("-----------------------------------------------------\n");


    // printf("%d\n",4.6u);      //error: invalid suffix "u" on floating constant
    // printf("%f\n", 12f);    //error: invalid suffix "f" on integer constant // 12.0000000
    printf("%f\n", (float)12);
    printf("%d\n", (int)4.6);
    printf("%d\n", (unsigned)4.6);


    printf("-----------------------------------------------------\n");

    // float a=4;       //declare start of program 
    printf("%f\n",a2);      //4.000000
    printf("%.0f\n",a2);      //4
    printf("%.1f\n",a2);      //4.0
    printf("%.10f\n",a2);      //4.0000000000

    printf("%.2f\n",1.1234);      //1.12
    printf("%.2f\n",1.5678);      //1.57
    printf("%.2f\n",1.5555);      //1.56
    printf("%.2f\n",1.4444);      //1.44
    printf("%.2f\n",1.8888);      //1.89
    printf("%.2f\n",1.9999);      //2.00
    printf("%.0f\n",1.9999);      //2

    printf("%.2f\n",floor(1.1));      //1.00    (Decreased the value) 
    printf("%.2f\n",ceil(1.1));      //2.00     (Incresed the value)


    printf("-----------------------------------------------------\n");


    // float a=4;
    // char name[]="Kishore";

    printf("%10.2f\n",a3);      // _ _ _ _ _ _ 4.00
    printf("%-10.2f\n",a3);      // 4.00_ _ _ _ _ _
    printf("%s\n",name);         // Kishore
    printf(name);                // Kishore       // Printf can store single string without  using the %s conversion character 
    printf("\n%10s\n",name);     // _ _ _Kishore
    printf("%-10s\n",name);      // Kishore_ _ _
    printf("%.3s\n",name);          // Kis
    printf("%10.3s\n",name);      // _ _ _ _ _ _ _Kis
    printf("%-10.3s\n",name);      // Kis_ _ _ _ _ _ _


    printf("-----------------------------------------------------\n");


    // Printf can store single string without  using the %s conversion character 
    // If there is more than one strings in printf then it will print only first string
    printf("Bahu\n","Bali");    //Bahu
    printf("Bahu %s\n","Bali");   //Bahu Bali
    printf("%s Pyaar \n", "Mine", "Kiya");  //Mine Pyaar
    printf("%s Pyaar %s\n", "Mine", "Kiya");  //Mine Pyaar Kiya
    printf("%s Pyaar \n", "Kahona", "Hai");  //Mine Pyaar Kiya
    printf("%s Pyaar %s\n", "Kahona", "Hai");  //Mine Pyaar Kiya
    printf("Taare" " Zameer " "Per");     //Taare Zameen Per    [ Because this is single string without , and operators]

    // printf("Hum"+ "Tum");  // error: invalid operands to binary + (have 'char *' and 'char *')
                                    //  printf("Hum"+ "Tum");


    printf("-----------------------------------------------------\n");


    printf("%d\n", printf("DON"));  //DON3
    printf("PK-%d\n", printf("Aashique-%d\n", printf("Raja Hindustani\n")));    //PK-12
    printf("PK-%d\n", printf("Humtum-%d\n", printf("Salaar\n")));    //PK-9
    printf("Dil-%d\n", printf("Khan-%d\r", printf("Pathaan\n")));    //Dil-7
    printf("Secunderabad-Biryani\rHyderabad");      
    //Secunderabad-Biryani
    //hyderabad
    


}