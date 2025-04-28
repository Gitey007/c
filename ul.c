#include<stdio.h>
int main(){
    char ch;
    printf(" Enter the charcter :\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
    printf(" character is lower case");
    } 
    else if (ch>='A' && ch<='Z'){
        printf(" character is upper case");
    }
    else{
        printf(" not a alphabet");
    }
   

}