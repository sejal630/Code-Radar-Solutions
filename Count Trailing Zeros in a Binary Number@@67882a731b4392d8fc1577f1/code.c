#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");
        return 0;
    }

    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }

    printf("%d\n", count);
    return 0;
}