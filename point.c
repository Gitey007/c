#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
//    address
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    // printf("%d\n",&ptr);
}