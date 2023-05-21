#include<stdio.h>
int main()
{
    int v[2004],k=0,n,r,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        v[k]=r;
        n/=10;
        k++;
    }
    for(j=k;j>=0;j--)
    {
        if(v[j]==6)
        {
            v[j]=9;
            break;
        }
    }
    for(j=k-1;j>=0;j--)
    {
        printf("%d",v[j]);
    }
}