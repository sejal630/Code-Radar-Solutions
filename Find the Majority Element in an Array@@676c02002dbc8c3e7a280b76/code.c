#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

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

    int majorityElement = -1;
    int majorityCount = 0;
    int threshold = n / 2;

    // Iterate through each element to check if it's the majority element
    for (i = 0; i < n; i++) {
        int currentCount = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }

        // If the current element's count is greater than the threshold,
        // it's the majority element. We can stop here as we only need to find one.
        if (currentCount > threshold) {
            majorityElement = arr[i];
            break;
        }
    }

    printf("%d\n", majorityElement);

    // Free the allocated memory
    free(arr);

    return 0;
}