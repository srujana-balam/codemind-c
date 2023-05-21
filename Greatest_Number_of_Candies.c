#include<stdio.h>
int main()
    {
        int n,i,v[2004],k,l=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
        }
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(v[i]>l)
            {
                l=v[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(v[i]==l)
            {
                printf("True ");
            }
            else
            {
                v[i]=v[i]+k;
                if(v[i]>=l)
                {
                    printf("True ");
                }
                else
                {
                    printf("False ");
                }
            }
        }
        return 0;
    }