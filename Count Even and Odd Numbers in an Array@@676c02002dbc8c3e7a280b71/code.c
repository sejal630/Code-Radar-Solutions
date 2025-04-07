#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0;;
    printf("");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c1++;
        if(a[i]%2==1 || a[i]%2==-1)
        c2++;
    }
    printf("%d %d",c1,c2);
}