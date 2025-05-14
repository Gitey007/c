#include<stdio.h>
void printtable(int n);
int main(){
    int n;
printf("write the value of n:\n");
scanf("%d",&n);
 printtable(n);// n is argument or actual parameter
}
 void printtable(int n){ //parameter or formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n",i*n);
    }
}
