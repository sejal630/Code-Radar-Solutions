#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Read the size of the array
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    // Allocate memory for the input array
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

    // Allocate memory for the running sum array
    int *runningSumArr = (int *)malloc(n * sizeof(int));
    if (runningSumArr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    // Calculate the running sum
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        runningSumArr[i] = currentSum;
    }

    // Output the running sum array
    for (int i = 0; i < n; i++) {
        printf("%d", runningSumArr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    free(runningSumArr);

    return 0;
}