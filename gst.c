#include<stdio.h>
void printprice(float price);
int main(){
    float price;
  printf("enter the price without gst:\n");
  scanf("%f",&price);
  printprice(price);


}
void printprice(float price) {
   price=price+(0.18)*price;
   printf(" price is : %f",price);
}