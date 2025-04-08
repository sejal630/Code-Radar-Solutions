#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }

    printf("%d\n", count);
    return 0;
}