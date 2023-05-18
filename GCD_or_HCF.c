#include<stdio.h>
int main()
{
    int v,k,i,l;
    scanf("%d %d",&v,&k);
    for(i=1;i<=v && i<=k;i++)
    {
        if(v%i==0 && k%i==0)
        {
            l=i;
        }
    }
    printf("%d",l);
    return 0;
}