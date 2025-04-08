#include <stdio.h>

int clearNthBit(int number, int n) {
    int mask = ~(1 << (n - 1));
    return number & mask;
}

int main() {
    int number, n;

    printf("");
    scanf("%d", &number);

    printf("");
    scanf("%d", &n);

    int result = clearNthBit(number, n);
    printf("%d\n", n, result);

    return 0;
}
