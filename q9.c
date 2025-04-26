#include<stdio.h>
int main(){
    int y;
    printf("write the year plzz\n");
    scanf("%d",&y);
    (y%4==0)?printf("year is leap"):printf("year is not leap");
}