#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int position = 0;

    while ((num & 1) == 0 && num != 0) {
        num >>= 1;
        position++;
    }

    printf("%d\n", position);
    return 0;
}