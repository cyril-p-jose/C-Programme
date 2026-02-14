#include <stdio.h>

int main() {
    int n;

    printf("Enter size of string: ");
    scanf("%d", &n);
    getchar();

    char str[n];

    printf("Enter string: ");
    fgets(str, n, stdin);

    printf("Entered string is: %s", str);

    return 0;
}
