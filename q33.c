#include<stdio.h>
float per(int nsc,int nm,int ns);
int main(){
int nsc,nm,ns;
printf("Enter the number of students in each subject: ");
scanf("%d%d%d",&nsc,&nm,&ns);
per(nsc,nm,ns);
}
float per(int nsc,int nm,int ns){
 float per=(nsc+nm+ns)/3;
 printf("percentage is\t %.2f",per);
 return per;
}