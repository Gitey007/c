#include<stdio.h>
int sum(int n);
int main(){
   
    printf("%d",sum(5));

}
int sum(int n){
    if (n == 1){
        return 1;
    }
    int summ1=sum(n-1);
    int sum=summ1+n;
    return sum;
}