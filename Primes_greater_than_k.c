#include<stdio.h>
int main()
{
    int v[2004],r,k,a,n=0,l=0,j,m;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    scanf("%d",&a);
    for(k=0;k<r;k++)
    {
        if(v[k]>=a)
        {
            for(j=1;j<=v[k];j++)
            {
                if(v[k]%j==0)
                    {
                        n++;
                    }
            
            }
            if(n==2)
            {
                l++;
            }
        }
        n=0;
    }
    printf("%d",l);
}