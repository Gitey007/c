#include<stdio.h>
int main(){
          int a,b,c;
          printf("write two numbers");
          scanf("%d%d",&a,&b);
          c=a;
          a=b;
          b=c;
          printf("%d %d",a,b);
    return 0;
}