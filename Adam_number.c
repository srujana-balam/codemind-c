#include<stdio.h>
int main()
{
    int n,r,x=0,v,a,b,k=0;
    scanf("%d",&n);
    v=n*n;
    while (n>0)
    {
        r=n%10;
        x=x*10+r;
        n=n/10;
    }
    a=x*x;
    while (a>0)
    {
        b=a%10;
        k=k*10+b;
        a=a/10;
    }
    if (v==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}