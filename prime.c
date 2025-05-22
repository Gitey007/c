#include <stdio.h>
int main() {
    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("number is prime");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("number is not prime");
            }
            else {
                printf("number is prime");
            }
        }
    }