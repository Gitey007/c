#include<stdio.h>
float convert(float c);
int main(){
    float n;
    printf("Enter the tenprature in celcius\t");
    scanf("%f",&n);
    convert(n);
 return 0;
}
float convert(float c){
    float f=c*(1.8)+32;
    printf("the temp is in f: %f\n",f);
    return f;
}