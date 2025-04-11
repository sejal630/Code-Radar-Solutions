#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Read the size of the array
    scanf("%d", &n);

    // Handle the case where the array is empty
    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first peak element
    for (i = 0; i < n; i++) {
        // Check if the current element is a peak
        int is_peak = 1;

        // Check left neighbor (if exists)
        if (i > 0 && arr[i] <= arr[i - 1]) {
            is_peak = 0;
        }

        // Check right neighbor (if exists)
        if (i < n - 1 && arr[i] <= arr[i + 1]) {
            is_peak = 0;
        }

        if (is_peak) {
            printf("%d\n", arr[i]);
            free(arr);
            return 0; // Return the first peak found
        }
    }

    // If no peak element is found
    printf("-1\n");
    free(arr);
    return 0;
}