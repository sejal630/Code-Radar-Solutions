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

    // Handle the case of an empty or single-element array
    if (n <= 1) {
        if (n == 1) {
            printf("-1\n");
        }
        free(arr);
        return 0;
    }

    // Iterate from right to left to find the greatest element to the right
    int greatestRight = arr[n - 1];
    arr[n - 1] = -1; // Replace the last element with -1

    for (int i = n - 2; i >= 0; i--) {
        int currentElement = arr[i];
        arr[i] = greatestRight;
        if (currentElement > greatestRight) {
            greatestRight = currentElement;
        }
    }

    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    return 0;
}