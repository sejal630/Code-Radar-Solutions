#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
char getGrade(float marks){
    if(marks>=85.0){
        return 'A';
    } else if(marks>=70.0){
        return 'B';
    } else{
        return 'C';
    }
}
int main(){
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s1[i].roll,&s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<n;i++){
        char grade=getGrade(s1[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c",&s1[i].roll,&s1[i].name,&s1[i].marks);
        return 0;
    }
}