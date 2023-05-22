#include<stdio.h>
int main()
{
    int arr[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            printf("%d ",arr[i]);
        }
    }
    
}