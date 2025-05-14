#include<stdio.h>
void printhelloworld(int count);
int main(){
    int count;
    printf("enter the count:\t");
    scanf("%d",&count);
    printhelloworld(count);
}
void printhelloworld(int count) {
    if(count==0){
        return;
    }
    printf("hello wdorl\n");
    printhelloworld(count-1);
}