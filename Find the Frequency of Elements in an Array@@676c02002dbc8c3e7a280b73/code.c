#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, count;

    // Read the number of elements in the array
    scanf("%d", &n);

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

    // Allocate memory for visited array
    int *visited = (int *)malloc(n * sizeof(int));
    if (visited == NULL) {
        perror("Memory allocation failed");
        free(arr);
        return 1;
    }
    for (i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as not visited
    }

    // Find and print the frequency of each unique element
    for (i = 0; i < n; i++) {
        if (visited[i] == 0) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1; // Mark the duplicate element as visited
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }

    // Free the dynamically allocated memory
    free(arr);
    free(visited);

    return 0;
}