#include<stdio.h>
int main()
{
    int n,v=0,k=1,r,j,l[2004];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        l[j]=v;
        r=v+k;
        v=k;
        k=r;
    }
    for(j=0;j<n;j++)
    {
        if(l[j]>n)
        {
            break;
        }
    }
    if(l[j]-n==n-l[j-1])
    {
        printf("%d %d",l[j-1],l[j]);
    }
    else if(l[j]-n>n-l[j-1])
    {
        printf("%d",l[j-1]);
    }
    else
    {
        printf("%d",l[j]);
    }
}