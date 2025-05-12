#include<stdio.h>
int sum(int a, int b);
int main(){
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    int s=sum(a,b);
    printf("sum is %d\n",s);
}
int sum(int a, int b){
    return a+b;
}