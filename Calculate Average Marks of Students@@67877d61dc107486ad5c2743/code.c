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
    float total=0;
    for(int i=0;i<N;i++){
        scanf("%d %s %f",&students[i].rollnumber,students[i].name,&students[i].marks);
        total+=students[i].marks;
    }
    float average=total/N;
    printf("Average Marks: %.2f\n",average);
    return 0;
}