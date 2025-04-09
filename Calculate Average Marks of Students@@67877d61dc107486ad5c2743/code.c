#include <stdio.h>
#include <string.h>
    struct student{
    int rollnumber;
    char name[100];
    float marks;
};
int main(){
    int N;
    scanf("%d",&N);
    struct student students[N];
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&students[i].rollnumber,students[i].name,&students[i].marks);
    }
    for(int i=0;i<N;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollnumber,students[i].name,students[i].marks);
    }
    return 0;
}