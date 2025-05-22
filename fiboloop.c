#include <stdio.h>

int main() {
    int n, t1= 0, t2= 1, t3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
        return 0;
    }