#include<stdio.h>
int main(){
    int a,b,c;
    printf("write the values of all three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c)?printf("a=%d is the greatest number",a):printf("c=%d is greatest number",c):(b>c)?printf("b=%d is greatest number",b):printf("c=%d is the greatest number",c);
}