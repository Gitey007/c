#include<stdio.h>
  int main(){
  int n;
  printf(" enter the number: ");
  scanf("%d",&n);
  
 
  // int i=0;
  // while(i<=n){
  //   printf("%d",i);
  //   i++;
  // }

  
  // for(int i=0;i<=n;i++){
  //   printf("%d",i);
  // }
  
  int i=0;
  do{
    printf("%d",i);
    i++;
  } while (i<=n);
  }