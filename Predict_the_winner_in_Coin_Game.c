#include<stdio.h>
int main()
{
    int v,k;
    scanf("%d %d",&v,&k);
    if(v%2==0 || k%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
    return 0;
}