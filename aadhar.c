#include<stdio.h>
int main(){
    int aadhar[10];
    int *ptr=&aadhar[0];
    for(int i=0;i<=10;i++){
        printf("enter the aadhar %d index:\t",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<=10;i++){
        printf("%d aadhar is:%d",i,*(ptr+i));
    }

}