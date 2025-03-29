#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}