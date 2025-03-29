#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n-1;j++){
            printf("");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}