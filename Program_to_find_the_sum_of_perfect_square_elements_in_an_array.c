#include<stdio.h>
int main(){
    int n,i,ans=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int x=arr[i],t=0,j=1;
        while(1){
            if(t>=x){
                break;
            }
            t=j*j;
            j+=1;
        }
        if(t==x){
            ans+=x;
        }
    }
    printf("%d",ans);
}