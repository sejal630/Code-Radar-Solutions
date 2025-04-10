#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int N, i, searchRoll, found = 0;
    scanf("%d", &N);

    struct Student students[N];

    for(i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    scanf("%d", &searchRoll);

    for(i = 0; i < N; i++) {
        if(students[i].roll == searchRoll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
                   students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Student not found\n");
    }

    return 0;
}