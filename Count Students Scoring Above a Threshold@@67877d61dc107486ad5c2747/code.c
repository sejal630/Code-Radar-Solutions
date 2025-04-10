#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    int n,i,count=0;
    float threshold;
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    scanf("%f",&threshold);
    for(i=0;i<n;i++){
        if(students[i].marks>threshold){
            count++;
        }
    }
    printf("count of students scoring above %.2f:%d\n",threshold,count);
    return 0;
}