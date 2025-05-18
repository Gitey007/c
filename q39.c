#include<stdio.h>
void printaddress(int n);
int main(){
    int n = 10;
    printf("%p\t",&n);
    printaddress(n);
}
void printaddress(int n){
    printf("%p",&n);
}
// it will print the address of n in main function and the address of n in printaddress function. The addresses will be diffrent because it is a call by value . adress is copied and passed to the function. So the address of n in main and printaddress will be different.