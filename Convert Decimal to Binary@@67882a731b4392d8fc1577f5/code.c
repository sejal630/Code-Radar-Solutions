#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int started = 0;

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1;
            printf("1");
        } else if (started) {
            printf("0");
        }
    }
    if (!started) {
        printf("0");
    }

    printf("\n