#include<stdio.h>
int main(){
    int n,i,m=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        int ans=0,x=arr[i];
        if(x==0){
            if(m==1){
                count++;
            }
        }
        else{
            while(x){
                ans++;
                x=x/10;
            }
            if(ans>m){
                m=ans;
            }
        }
    }
    for(i=0;i<n;i++){
        int ans=0,x=arr[i];
        if(x==0){
            if(m==1){
                printf("%d ",arr[i]);
            }
        }
        else{
            while(x){
                ans++;
                x=x/10;
            }
            if(ans==m){
                printf("%d ",arr[i]);
            }
        }
    }
}