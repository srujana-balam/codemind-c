#include<stdio.h>
int main()
{
    int n,r,v=0,k=0,l=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            v++;
        }
        else
        {
            k++;
        }
        n=n/10;
    }
    if(v>0 && k>0)
    {
        printf("Mixed");
    }
    else if(v>0)
    {
        printf("Even");
    }
    else if(k>0)
    {
        printf("Odd");
    }
    return 0;
}