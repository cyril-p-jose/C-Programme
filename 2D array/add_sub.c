#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int a[m][n], b[m][n], add[m][n], sub[m][n];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nFirst Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nAddition Result:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction Result:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
