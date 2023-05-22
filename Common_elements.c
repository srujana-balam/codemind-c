#include<stdio.h>
int co(int a){
    int s=0;
    while(a){
        s=s+a%10;
        a/=10;
    }
    return s;
    
}
int main(){
    int a,p;
    
    scanf("%d%d",&a,&p);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int q[p];
    for (int i=0;i<p;i++){
        scanf("%d",&q[i]);
    }
    int c[1000],o=0;
    for (int i=0;i<a;i++){
        for (int j=0;j<p;j++){
            if(b[i]==q[j]){
                c[o]=b[i];
                o++;
            }
        }
            
    }
    for(int i=0;i<o;i++){
       for(int j = i+1; j < o; j++){
          if(c[i] == c[j]){
             for(int k = j; k <o; k++){
                c[k] = c[k+1];
             }
             j--;
             o--;
          }
       }
    }
    for (int i=0;i<o;i++){
        printf("%d ",c[i]);
    }
          
    
   
}