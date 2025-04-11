#include <stdio.h>
#include <stdlib.h>

int smallestMissingPositive(int arr[], int n) {
    // Create a boolean array to mark the presence of positive integers
    int *present = (int *)calloc(n + 1, sizeof(int));
    if (present == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Mark the presence of positive integers in the input array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = 1;
        }
    }

    // Find the smallest positive integer that is not marked
    for (int i = 1; i <= n; i++) {
        if (present[i] == 0) {
            free(present);
            return i;
        }
    }

    // If all positive integers from 1 to n are present, the smallest missing
    // positive integer is n + 1
    free(present);
    return n + 1;
}

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

    // Find the smallest missing positive integer
    int missing = smallestMissingPositive(arr, n);

    // Output the result
    printf("%d\n", missing);

    // Free the allocated memory
    free(arr);

    return 0;
}