#include<stdio.h>
int main(){
int n1,n2,n3,n4,n5;
printf("write the marks of each subject\n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
int avg=(n1+n2+n3+n4+n5)/5;
printf("avg = %d\n",avg );
}