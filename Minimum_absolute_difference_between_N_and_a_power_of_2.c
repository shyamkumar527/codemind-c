#include<math.h>
#include<stdio.h>
int main(){
    int n,i,x,a,b,t=0;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<n;i++){
        x=pow(2,i);
        l[i]=x;
    }
    a=n;
    b=n;
    while(1){
        int p=0,q=0;
        for(i=0;i<n;i++){
            if(l[i]==a){
                p=1;
                break;
            }
        }
        if(p==1){
            printf("%d",t);
            break;
        }
        for(i=0;i<n;i++){
            if(l[i]==b){
                q=1;
                break;
            }
        }
        if(q==1){
            printf("%d",t);
            break;
        }
        t+=1;
        a-=1;
        b+=1;
    }
}