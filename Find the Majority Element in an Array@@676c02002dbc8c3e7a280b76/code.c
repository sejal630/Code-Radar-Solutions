#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, target;

    // Read the size of the array
    scanf("%d", &n);

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

    // Read the target element to find
    scanf("%d", &target);

    int firstIndex = -1; // Initialize to -1 (not found)

    // Iterate through the array to find the first occurrence of the target
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            firstIndex = i;
            break; // Exit the loop as soon as the first occurrence is found
        }
    }

    printf("%d\n", firstIndex);

    // Free the allocated memory
    free(arr);

    return 0;
}