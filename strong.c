#include<stdio.h>
int fact(int n );
int main(){
    int i,n,a,f=1,num,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
    num=n;
    a=n%10;
    }
    for( i =1;i < a; i++){
        f=f*i;
        sum=sum+f;
        n=n/10;
        
    }
    if(sum==num){
        printf("number is strong");
    }
    else{
        printf("number is not strong");
    }
    }
    


