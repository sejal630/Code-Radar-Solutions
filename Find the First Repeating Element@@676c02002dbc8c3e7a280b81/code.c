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

    int firstRepeating = -1;
    int minIndex = n; // Initialize with a value greater than any possible index

    // Iterate through the array to find the first repeating element
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Found a repeating element
                if (j < minIndex) {
                    minIndex = j;
                    firstRepeating = arr[i];
                }
            }
        }
    }

    printf("%d\n", firstRepeating);

    free(arr);
    return 0;
}