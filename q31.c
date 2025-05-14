#include<stdio.h>
#include<math.h>
float areas(float side);
float areac(float radius);
float arear(float a,float b);
int main(){
    float side,radius,a,b;
    printf("Enter the side of the square:\n ");
    scanf("%f",&side);
    areas(side);
    printf("enter the radius of the circle:\n ");
    scanf("%f",&radius);
     areac(radius);
    printf("Enter the sides of the rectangle:\n ");
    scanf("%f%f",&a,&b);
    arear(a,b);

}
float areas(float side){
    float area=side*side;
    printf("area of square is =%f\n",area);
}
float areac(float radius){
    float area=3.14*radius*radius;
    printf("area of the circle is=%f\n",area);
}
float arear(float a, float b){
    float area=a*b;
    printf("area of the rectangle is=%f\n",area);
}
