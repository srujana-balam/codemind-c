#include<stdio.h>
int main()
{
    int v[2004],r,k,a,m=0;
    scanf("%d",&r);
    for (k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        if(v[k]%2!=0)
        {
            break;
        }
        else
        {
            m+=v[k];
        }
    }
    printf("%d",m);
}