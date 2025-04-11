#include <stdio.h>
#include <stdlib.h>

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

    int maxCount = 0;
    int mostFrequent = -1; // Initialize with a value that won't be in the array

    // Iterate through the array to count frequencies
    for (int i = 0; i < n; i++) {
        int currentCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }

        // Update mostFrequent if the current element's frequency is higher
        // or if the frequency is the same but the current element is smaller
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequent = arr[i];
        } else if (currentCount == maxCount && arr[i] < mostFrequent) {
            mostFrequent = arr[i];
        }
    }

    printf("%d\n", mostFrequent);

    free(arr);
    return 0;
}