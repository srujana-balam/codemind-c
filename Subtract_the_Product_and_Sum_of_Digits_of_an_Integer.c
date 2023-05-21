#include<stdio.h>
int main()
{
    int n,m,l,v=0,k=1;
    scanf("%d",&n);
    while(n>0)
    {
       m=n%10;
       v+=m;
       k*=m;
       n=n/10;
    }
    l=k-v;
    printf("%d",l);
    return 0;
}