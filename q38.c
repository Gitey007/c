#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a,b,c;
    printf("enter the number:\t");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a is:%d,b is :%d\n",a,b);

} 
void swap(int *a , int *b){
    int t=*a;
    *a=*b;
    *b=t;
   
}
