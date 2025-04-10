#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    int n,i,minIndex=0;
    scanf("%d",&n);
    struct student students[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    float minmarks=students[0].marks;
    for(i=1;i<n;i++){
        if(students[i].marks<minmarks){
            minmarks=students[i].marks;
            minIndex=i;
        }
    }
    printf("student with minimum marks: ");
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[minIndex].roll,students[minIndex].name,students[minIndex].marks);
    return 0;
}