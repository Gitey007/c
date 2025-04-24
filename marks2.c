#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5;
    printf("write the marks in all five subject\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n4);
    int p=(n1+n2+n3+n4+n5)/5;
    if(p>=90){
        printf("grade is A");
    }
    else if(p>=80){
        printf("grade is B");
    }
    else if(p>=70){
        printf("grade is C");
    }
    else if(p>=60){
        printf("grade is D");
    } else{
        printf("grade is E");
    }
}