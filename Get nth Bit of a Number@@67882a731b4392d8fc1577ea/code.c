#include <stdio.h>

int getNthBit(int number, int n) {
    return (number >> (n - 1)) & 1;
}

int main() {
    int number, n;
    printf("");
    scanf("%d", &number);

    printf("");
    scanf("%d", &n);

    int nthBit = getNthBit(number, n);
    printf("%d\n", n, number, nthBit);

    return 0;
}
