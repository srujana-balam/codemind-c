#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s+=r*r;
        n/=10;
        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }
    if(s!=1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}