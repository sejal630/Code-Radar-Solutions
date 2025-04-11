#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum of the absolute values of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += abs(num % 10); // Take the absolute value of the digit
        num /= 10;
    }
    return sum;
}

int main() {
    int n;

    // Read the size of the array (in this case, it's 2 based on the input)
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

    // Allocate memory for the array to store the sum of digits
    int *sumArr = (int *)malloc(n * sizeof(int));
    if (sumArr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    // Calculate the sum of digits for each element and store it in sumArr
    for (int i = 0; i < n; i++) {
        sumArr[i] = sumOfDigits(arr[i]);
    }

    // Output the sum of digits array
    for (int i = 0; i < n; i++) {
        printf("%d", sumArr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    free(sumArr);

    return 0;
}