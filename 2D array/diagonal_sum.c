#include <stdio.h>
int main() {
    int m, n, i, j, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m && i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}
