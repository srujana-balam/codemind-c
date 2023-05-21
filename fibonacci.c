#include<stdio.h>
int main()
{
    int n,l,v=0,k=1,r;
    scanf("%d",&n);
    for(l=1;l<=n;l++)
    {
        printf("%d ",v);
        r=v+k;
        v=k;
        k=r;
    }
    return 0;
}