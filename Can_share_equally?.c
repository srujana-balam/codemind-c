#include<stdio.h>
int main()
{
    int v,k,l=0;
    scanf("%d%d",&v,&k);
    l=v+(2*k);
    if(v==0&&k%2==0)
    {
        printf("YES");
    }
    else if(v==0&&k%2!=0)
    {
        printf("NO");
    }
    else if(l%2==0)
    {
        printf("YES");
    }
    else
    {
    printf("NO");
    }
    return 0;
}