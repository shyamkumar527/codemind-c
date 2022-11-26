#include<stdio.h>
int prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,a,b,t=0;
    scanf("%d",&n);
    a=n;
    b=n;
    while(1){
        if(prime(a)){
            printf("%d",t);
            break;
        }
        if(prime(b)){
            printf("%d",t);
            break;
        }
        t+=1;
        a-=1;
        b+=1;
    }
}