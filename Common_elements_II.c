#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
        
    }
    int d[b];
    for(int i=0;i<b;i++){
        scanf("%d",&d[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            if(i!=j){
                if(c[i]==c[j]){
                    for(int k=j;k<a;k++){
                        c[k]=c[k+1];
                    }
                    a--;
                    j--;
                }
                
                
            }
        }
    }
    for(int i=0;i<b;i++){
        for(int j=i;j<b;j++){
            if(i!=j){
                if(d[i]==d[j]){
                    for(int k=j;k<b;k++){
                        d[k]=d[k+1];
                    }
                    b--;
                    j--;
                }
                
                
            }
        }
    }
    int q;
    for(int i=0;i<a;i++){
        q=0;
        for(int j=0;j<b;j++){
            if(c[i]==d[j]){
                q++;
            }
        }
        if(q==0){
            printf("%d ",c[i]);
        }
    }
    for(int i=0;i<b;i++){
        q=0;
        for(int j=0;j<a;j++){
            if(d[i]==c[j]){
                q++;
            }
        }
        if(q==0){
            printf("%d ",d[i]);
        }
    }
   // printf("%d",q);
    
    
    
        
}