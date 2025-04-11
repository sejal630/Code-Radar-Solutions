#include <stdio.h>
#include <stdlib.h>

// Function to rotate the array to the right by k steps
void rotateArray(int arr[], int n, int k) {
    // Effective number of rotations to avoid unnecessary loops
    k = k % n;

    // If k is 0 or a multiple of n, no rotation is needed
    if (k == 0) {
        return;
    }

    // Temporary array to store the rotated elements
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Copy the last k elements to the beginning of the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the first n-k elements to the remaining part of the temporary array
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy the rotated elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    free(temp);
}

int main() {
    int n, k, i;

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

    // Read the number of steps to rotate
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Print the rotated array
    for (i = 0; i < n; i++) {
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