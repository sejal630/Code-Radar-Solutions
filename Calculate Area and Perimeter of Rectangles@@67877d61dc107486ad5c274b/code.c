#include <stdio.h>
struct rectangle{
    float length;
    float breadth;
};
int main(){
    int n,i;
    scanf("%d",&n);
    struct rectangle r1[n];
    for(i=0;i<n;i++){
        scanf("%f %f",&r1[i].length,&r1[i].breadth);
    }
    for(i=0;i<n;i++){
        float Area=r1[i].length*r1[i].breadth;
        float Perimeter=2*r1[i].length*r1[i].breadth;
        printf("Rectangle %d: Area= %.2f,Perimeter= %.2f\n",i+1,area,perimeter);
    }
    return 0;
}