#include<stdio.h>
int main (){
    int marks[3];
    printf("enter the number in physics");
    scanf("%d",&marks[0]);
    printf("enter the number in chemistry");
    scanf("%d",&marks[1]);
    printf("enter the number in maths");
    scanf("%d",&marks[2]);
    printf("your total marks are %d",marks[0]+marks[1]+marks[2]);

}