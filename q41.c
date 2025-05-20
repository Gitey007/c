#include<stdio.h>
int main(){
    int price[3];
    printf("enter the price of first item\n");
    scanf("%d",&price[0]);
    printf("enter the price of second item\n");
    scanf("%d",&price[1]);
    printf("enter the price of third item\n");
    scanf("%d",&price[2]);
    printf("theirs final cost with gst is %.2f\n",((price[0]+price[1]+price[2])*0.18)+(price[0]+price[1]+price[2]));

}