#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int N, i;
    float total = 0, average;

    printf("");
    scanf("%d", &N);

    struct Student students[N];

    printf("");
    for(i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        total += students[i].marks;
    }

    average = total / N;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}