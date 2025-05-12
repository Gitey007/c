#include<stdio.h>
void i();
void f();
int main(){
char c;
printf(" write the national code :for india=i and for french=f\n");
scanf("%c",&c);
if(c=='i'){
    i();
}
else if (c=='f'){
    f();
}
else {
    printf("wrong data");
}

} 
void i(){
    printf("namste\n");
}
void f(){
    printf("bonjour\n");
}
 