#include <stdio.h>

int getNthBitValue(int number, int n) {
    // Right shift the number by (n-1) positions and use bitwise AND with 1
    return (number >> (n - 1)) & 1;
}

int main() {
    int number, n;
    printf("");
    scanf("%d", &number);

    printf("");
    scanf("%d", &n);

    // Get the nth bit value
    int nthBitValue = getNthBitValue(number, n);
    printf("%d\n",nthBitValue);

    return 0;
}

