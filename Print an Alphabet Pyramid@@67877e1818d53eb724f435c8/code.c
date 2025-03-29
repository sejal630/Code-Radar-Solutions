#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1,j<=n-i,j++){
            print(" ");
        }
        for(char ch='A',ch<='A'+i,ch++){
            print("%d ",j);
        }
        printf("\n");
    }
    return 0;
}