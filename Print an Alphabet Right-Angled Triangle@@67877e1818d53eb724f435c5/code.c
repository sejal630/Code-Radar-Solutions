#include <stdio.h>
int main(){
    int n,ch;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(ch ='A';ch<'A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}