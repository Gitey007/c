#include<stdio.h>
#include<math.h>
int main(){
    int n,m,c=0;
    double arm= 0;
    printf("enter the number :\t");
    scanf("%d",&n);
    m=n;
    while(n>0){
        n=n/10;
        c++;
    }
    n=m;
    while(n>0){
        arm=arm+(pow((n%10),c));
        n=n/10;
    }
    if((int) (arm + 0.5)==m){
        printf("%d is armstrong number",m);
    }
    else{
        printf("%d is not armstrong number",m);
    }
}

// in this code power gives us double variable value for arm 
// so firstly we have to dclare arm as double variable then we have 
// to typecaste arm vale in to int compare with integer value of m
// we add 0.5 because (int)(124.99999999999999 + 0.5) → (int)(125.49999...) → 125 ✅