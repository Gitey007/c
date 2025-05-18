#include<stdio.h>
void function(float a, float b,float *sum, float *avg, float *prod);
float main(){
    float a ,b;
    float sum, prod;
    float avg;
printf("enter the two numbers:");
scanf("%f%f",&a,&b);
function(a,b,&sum,&avg,&prod);
printf("sum=%f,avg=%f,prod=%f",sum,avg,prod);
}

void function(float a, float b, float *sum, float *avg, float *prod){
    *avg=(a+b)/2;
     *prod=a*b;
    *sum=a+b;
    

}