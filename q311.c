#include<stdio.h>
int fact(int n);
int main(){
  printf("%d",fact(5));
}
int fact(int n){
    if(n==1){
        return 1;
    }
     int factnm1=fact(n-1);
     int fact=factnm1*n;
     return fact;
}