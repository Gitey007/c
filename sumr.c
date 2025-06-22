#include<stdio.h>
int sum(int);
int main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Sum of %d  is %d",a,sum(a));

}
int sum(int a){
 
    if(a==0){
        return 0;
    }else {
        return sum(a/10)+a%10;
    }
}