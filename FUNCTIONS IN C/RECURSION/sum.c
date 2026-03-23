#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;

    printf("Sum of digits = %d", sumDigits(num));

    return 0;
}
