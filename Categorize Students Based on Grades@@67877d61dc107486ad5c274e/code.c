#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

char getGrade(float marks) {
    if (marks >= 85.0) {
        return 'A';
    } else if (marks >= 70.0) {
        return 'B';
    } else {
        return 'C';
    }
}

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < N; i++) {
        char grade = getGrade(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n",
               students[i].rollNumber, students[i].name, grade);
    }

    return 0;
}