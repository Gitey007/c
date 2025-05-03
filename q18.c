#include<stdio.h>
int main(){
    int n;
    do{ 
        printf(" enter the number :");
        scanf("%d",&n);
        printf("%d",n);
        if(n%7==0){
            break;
        }

        printf("thank you");
}