#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else if (arr[i] != arr[i - 1]) {
            maxLength = (currentLength > maxLength) ? currentLength : maxLength;
            currentLength = 1;
        }
    }

    // Check if the last consecutive sequence is the longest
    maxLength = (currentLength > maxLength) ? currentLength : maxLength;

    return maxLength;
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

    // Find the length of the longest consecutive sequence
    int length = longestConsecutive(arr, n);

    // Output the result
    printf("%d\n", length);

    // Free the allocated memory
    free(arr);

    return 0;
}