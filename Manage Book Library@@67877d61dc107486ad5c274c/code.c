#include <stdio.h>
struct book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    int n,i;
    float threshold;
    scanf("%d",&n);
    struct book b1[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f",b1[i].title,b1[i].author,b1[i].price);
    }
    scanf("%f",threshold);
    for(i=0;i<n;i++){
        if(b1[i].price>threshold){
            printf("Title: %s, Author: %s, Price: %.2f\n",b1[i].title,b1[i].author,b1[i].price);
        }
    }
    return 0;
}