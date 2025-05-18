#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("enter the value of n:\t");
    scanf("%d",&n);
    // printf("fibo of %d is %d",n,fibo(n));
    for(int i=0;i<=n;i++){
        printf("%d,",fibo(i));
    }
}
int fibo(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fibonm1=fibo(n-1);
    int fibonm2=fibo(n-2);
    int fibo=fibonm1+fibonm2;
    return fibo;
}