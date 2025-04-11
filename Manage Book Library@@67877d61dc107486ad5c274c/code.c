#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Book books[MAX];

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float threshold;
    scanf("%f", &threshold);
    printf("Books above price %.2f:\n",threshold);

    for (int i = 0; i < N; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
    