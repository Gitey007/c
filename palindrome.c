#include<stdio.h>
int main(){
    int n,m,rev;
    printf("enter the number");
    scanf("%d",&n);
    while (n>0){
        m=n;
        int a=n%10;
        n=n/10;
        rev= rev*10+a;
        
    }
if(m=rev){
    printf("the number is palindrome");
} else{
    printf("the number is not palindrome");
}
   

}
