#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i;

    // Read the number of elements in the array
    scanf("%d", &n);

    // Handle the case where the array has less than 2 elements
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // Read the array elements from the user
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Handle the case where all elements are the same
    if (secondLargest == INT_MIN) {
        printf("-1\n");
    } else {
        // Output the second largest element
        printf("%d\n", secondLargest);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}