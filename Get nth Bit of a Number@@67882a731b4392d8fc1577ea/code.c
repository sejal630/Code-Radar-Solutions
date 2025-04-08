#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);

    int bit = (num >> pos) & 1;
    printf("%d\n", bit);

    return 0;
}

