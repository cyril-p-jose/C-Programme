#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        int i = 1;
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d is %lld\n", n, fact);
    }

    return 0;
}
