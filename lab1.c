#include<stdio.h>
 int main(){
 int i,n,sum=0;
 printf("enter the value of n\t");
 scanf("%d",&n);
 for (i=0;i<=n;i++){
    sum=sum+i;
 }
   printf("sum=%d",sum);

return 0;
}