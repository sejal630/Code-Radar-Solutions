#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Read the array elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid array element.\n");
            free(arr);
            return 1;
        }
    }

    // Handle the case where the array has less than two elements
    if (n < 2) {
        printf("Array size should be at least 2 to find a product of two elements.\n");
        free(arr);
        return 1;
    }

    long long maxProduct = LLONG_MIN; // Initialize with the smallest possible long long

    // Iterate through all possible pairs of elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long currentProduct = (long long)arr[i] * arr[j];
            if (currentProduct > maxProduct) {
                maxProduct = currentProduct;
            }
        }
    }

    printf("%lld\n", maxProduct);

    free(arr);
    return 0;
}