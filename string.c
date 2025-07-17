#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
int i,m=0;;
printf("enter the string\n");
gets(str1);
for(i=0 ;str1[i]!='\0';i++){
m++;
}
printf("have number %d alphabates:",m);
return 0;
}

