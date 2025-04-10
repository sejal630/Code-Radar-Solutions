#include <stdio.h>
struct student{
    int roll;
    char name;
    float marks;
};
int main(){
    int n,i,allPassed=1;
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &students[i].roll, &student[i].name, &student[i].marks);
        if(students[i].marks<=50){
        allPassed=0;
        }
    }
    if(allPassed){
        printf("All Passed\n");
    }
    else{
        printf("Not All Passes\n");
    }
    return 0;
}