#include<stdio.h>
int main()
{
    int n;
    printf("");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    int g=a[0],s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>g)
        g=a[i];
        if(a[i]<s)
        s=a[i];
    }
    printf("%d %d",s,g);
    
}