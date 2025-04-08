#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int flipped = ~num;
    printf("%d\n", flipped);

    return 0;
}