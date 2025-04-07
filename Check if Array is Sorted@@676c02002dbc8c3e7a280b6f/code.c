#include <stdio.h>
int main(){
    int n,i;
    printf("");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    int p;
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        p=a[i];
    }
    if(a[0]<=p)
    printf("Sorted");
    else
    printf("Not Sorted");
}