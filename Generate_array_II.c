#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        
    }
    for(int i=0;i<a;i+=2){
        
        for (int j=0;j<b[i+1];j++){
            printf("%d ",b[i]);
        }
        
       
    }
}