#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if an array is non-decreasing
bool isNonDecreasing(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if an array is non-increasing
bool isNonIncreasing(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
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

    // Check if the array is monotonic
    if (isNonDecreasing(arr, n) || isNonIncreasing(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    // Free the allocated memory
    free(arr);
    return 0;
}