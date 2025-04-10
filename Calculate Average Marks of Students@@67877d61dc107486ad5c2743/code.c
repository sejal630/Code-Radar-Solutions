#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    float totalmarks = 0.0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        totalmarks+=students[i].marks;
    }
    float average = totalmarks/n;
    printf("Average Marks: %.2f\n",average);
    return 0;
}