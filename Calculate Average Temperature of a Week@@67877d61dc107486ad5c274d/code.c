#include <stdio.h>
struct day{
    char name[50];
    float temperature;
};
int main(){
    struct day d1[7];
    float sum=0.0;
    for(int i=0;i<7;i++){
        scanf("%s %f",&d1[i].name,&d1[i].temperature);
        sum+=d1[i].temperature;
    }
    float average=sum/7;
    printf(" Average Temperature: %.2f\n",average);
    return 0;
}