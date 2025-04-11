#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    scanf("%d", &n);

    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {

        int is_peak = 1;

        if (i > 0 && arr[i] <= arr[i - 1]) {
            is_peak = 0;
        }

        if (i < n - 1 && arr[i] <= arr[i + 1]) {
            is_peak = 0;
        }

        if (is_peak) {
            printf("%d\n", arr[i]);
            free(arr);
            return 0;
        }
    }

    printf("-1\n");
    free(arr);
    return 0;
}