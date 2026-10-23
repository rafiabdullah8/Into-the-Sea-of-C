/*
Problem: Given an n times m matrix, determine whether it is a cross-diagonal matrix:
The matrix must be square, both diagonals must contain only 1s, and every other element must be 0.
Print YES if the condition is satisfied; otherwise, print NO.
*/


#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("NO");
        return 0;
    }

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (arr[i][j] != 1) {
                    printf("NO");
                    return 0;
                }
            } else if (arr[i][j] != 0) {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}
