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
    struct student studnts[N],topscorer;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollnumber,&students[i].name,&students[i].marks);
        if(i==0 || students[i].marks>topscorer.marks){
            topscorer=students[i];
        }
    }
    printf("%d %s %.2f\n",topscorer.rollnumber,topscorer.name,topscorer.marks);
    return 0;
}