#include<stdio.h>
int main(){
    int t,s,b,n;
    scanf("%d%d%d",&t,&s,&b);
    n=(2*t*s*b*512)/1024;
    printf("%d KB",n);
}