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
    int n,i,j,ans=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if(i!=j && i*j==n){
                if(prime(i) && prime(j)){
                    ans=1;
                    printf("%d %d",i,j);
                    break;
                }
            }
        }
        if(ans==1){
            break;
        }
    }
    if(ans==0){
        printf("-1");
    }
}