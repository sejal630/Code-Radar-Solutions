 #include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

void sortDescending(struct Student s[], int n) {
    int i, j;
    struct Student temp;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int N, i;
    scanf("%d", &N);
    struct Student students[N];

    for(i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    sortDescending(students, N);

    for(i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", 
               students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}