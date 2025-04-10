#include <stdio.h>
#include <string.h>
struct student{
    int rollnumber;
    char name[50];
    float marks;
};
int main(){
    int n,i;
    float total=0,average;
    scanf("%d",&n);
    struct student students;
    for(i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollnumber,&students[i].name,&students[i].marks);
        total+=students[i].marks;
    }
    average =total/n;
    printf("\nTotal Marks: %.2f\n",total);
    printf("Average Marks: %.2f\n",average);
    return 0;
}