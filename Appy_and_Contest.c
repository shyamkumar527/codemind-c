#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        int ans=0,n,a,b,k;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(int j=1;j<=n;j++){
            if(ans>=k){
                break;
            }
            if(j%a==0 && j%b!=0){
                ans+=1;
            }
            else if(j%b==0 && j%a!=0){
                ans+=1;
            }
        }
        if(ans>=k){
            printf("Win");
        }
        else{
            printf("Lose");
        }
        printf("
");
    }
}