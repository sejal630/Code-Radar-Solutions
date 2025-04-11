#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strcmp (though not strictly needed for integers)

int main() {
    int n, i;
    int isPalindrome = 1; // Assume it's a palindrome initially

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

    // Check if the array is a palindrome
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    // Free the allocated memory
    free(arr);

    return 0;
}