
// Finding Simple Interest   =>   si= p*r*t/100;
#include<stdio.h>
void main(){
    float p,r,t,si,net;
    printf("Enter the principle amount , time, rate of Interest : ");
    scanf("%f %f %f", &p, &t, &r);

    si=p*t*r/100;
    net=si+p;
    printf("Si = %.2f, Net = %.2f", si,net);


    /*
    
    Enter the principle amount , time, rate of Interest : 1000
    10
    2.5
    Si = 250.00, Net = 1250.00
    */
}