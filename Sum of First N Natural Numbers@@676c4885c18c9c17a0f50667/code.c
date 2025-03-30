#include <stdio.h>

int main() {
    int n, sum = 0, i;
    
    printf(" ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("%d ", sum);

    return 0;
}
