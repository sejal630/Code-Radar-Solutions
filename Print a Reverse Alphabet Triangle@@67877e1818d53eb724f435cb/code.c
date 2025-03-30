#include <stdio.h>

int main() {
    int n, i, j;
    char ch;
    
    printf("");
    scanf("%d ", &n);
    
    for (i = n; i > 0; i--) {
        ch = 'A';
        for (j = 0; j < i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}


